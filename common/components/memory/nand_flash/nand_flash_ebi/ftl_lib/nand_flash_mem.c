/**
 * \file
 *
 * \brief NAND Flash ctrl access interface definition.
 *
 * This file contains ctrl access interface functions of NAND Flash module.
 *
 * Copyright (c) 2013 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#include "nand_flash_mem.h"
#include "nand_flash_translation.h"
#include <string.h>

#define MODEL(translated)     ((struct nand_flash_model *)translated)

/* NAND Flash device structure. */
static struct nand_flash_translation nf_translation;

#ifdef BOARD_NF_DATA_ADDR
/* Address for transferring command to the NAND Flash. */
static uint32_t cmd_address = BOARD_NF_COMMAND_ADDR;
/* Address for transferring address to the NAND Flash. */
static uint32_t addr_address = BOARD_NF_ADDRESS_ADDR;
/* Address for transferring data to the NAND Flash. */
static uint32_t data_address = BOARD_NF_DATA_ADDR;
#else
# warning There is no NAND Flash module on the board.
/* default address for pass the jenkins. */
static uint32_t cmd_address = 0x60400000;
static uint32_t addr_address = 0x60200000;
static uint32_t data_address = 0x60000000;
#endif

#if ACCESS_USB == true
/** Global NAND Flash temp buffer */
static uint8_t nand_flash_usb_buffer[NAND_COMMON_MAX_PAGE_SIZE];
#endif

/* NAND Flash status. */
static uint32_t nand_flash_status = NAND_FLASH_NOT_INIT;

/**
 * \brief This function tests memory state, and starts memory initialization
 *
 * \return Ctrl_status
 */
Ctrl_status nand_flash_test_unit_ready(void)
{
	switch (nand_flash_status) {
	case NAND_FLASH_NOT_INIT:
		if (nand_flash_translation_initialize(&nf_translation, 0,
				cmd_address, addr_address, data_address, 0, 0)) {
			return CTRL_NO_PRESENT;
		}
		nand_flash_status = NAND_FLASH_READY;
		return CTRL_GOOD;

	case NAND_FLASH_READY:
		nand_flash_flush();
		return CTRL_GOOD;

	case NAND_FLASH_BUSY:
		return CTRL_BUSY;

	case NAND_FLASH_UNLOADED:
		return CTRL_NO_PRESENT;

	default:
		return CTRL_BUSY;
	}
}

/**
 * \brief This function returns the address of the last valid sector
 *
 * \param nb_sector  Pointer to number of sectors (sector=512 bytes)
 *
 * \return Ctrl_status
 */
Ctrl_status nand_flash_read_capacity(uint32_t *nb_sector)
{
	if (nand_flash_status == NAND_FLASH_UNLOADED) {
		return CTRL_NO_PRESENT;
	}

	if (nand_flash_status == NAND_FLASH_NOT_INIT) {
		if (nand_flash_translation_initialize(&nf_translation, 0,
				cmd_address, addr_address, data_address, 0,	0)) {
			return CTRL_NO_PRESENT;
		}
		nand_flash_status = NAND_FLASH_READY;
	}

	if (nand_flash_status == NAND_FLASH_READY) {
		*nb_sector	= nand_flash_translation_get_device_size_in_byte(
				&nf_translation) / SECTOR_SIZE;
		return CTRL_GOOD;
	}

	return CTRL_BUSY;
}

/**
 * \brief This function returns the write-protected mode
 *
 * \return true if the memory is protected
 */
bool nand_flash_wr_protect(void)
{
	return false;
}

/**
 * \brief This function informs about the memory type
 *
 * \return true if the memory is removable
 */
bool nand_flash_removal(void)
{
	return true;
}

/**
 * \brief This function unloads/loads the memory
 *
 * \return true if memory unload/load success
 */
bool nand_flash_unload(bool unload)
{
	if (!unload && nand_flash_status == NAND_FLASH_UNLOADED) {
			nand_flash_status = NAND_FLASH_NOT_INIT;
	} else {
		switch (nand_flash_status) {
		case NAND_FLASH_NOT_INIT:
			nand_flash_status = NAND_FLASH_UNLOADED;
			return true;
	
		case NAND_FLASH_READY:
			nand_flash_flush();
			nand_flash_status = NAND_FLASH_UNLOADED;
			return true;
	
		case NAND_FLASH_UNLOADED:
			return true;
	
		default:
			return false;
		}
	}
}

/* ------------ SPECIFIC FUNCTIONS FOR TRANSFER BY USB --------------- */

#if ACCESS_USB == true

#include "udi_msc.h"

/**
 * \brief This function transfers the memory data to the USB MSC interface
 *
 * \param addr Sector address to start read
 * \param nb_sector Number of sectors to transfer (sector=512 bytes)
 *
 * \return Ctrl_status
 */
Ctrl_status nand_flash_usb_read_10(uint32_t addr, uint16_t nb_sector)
{
	uint8_t nb_sector_trans;
	uint16_t page_data_size
		= nand_flash_model_get_page_data_size(MODEL(&nf_translation));

	if (nand_flash_status == NAND_FLASH_READY) {
		while (nb_sector) {
			nb_sector_trans = min(nb_sector, (page_data_size / SECTOR_SIZE));
			if (!nand_flash_read((addr * SECTOR_SIZE), nand_flash_usb_buffer,
					(nb_sector_trans * SECTOR_SIZE))) {
				udi_msc_trans_block(true, (uint8_t *)nand_flash_usb_buffer,
						(nb_sector_trans * SECTOR_SIZE), NULL);
				nb_sector -= nb_sector_trans;
				addr += nb_sector_trans;
			} else {
				return CTRL_FAIL;
			}
		}
		return CTRL_GOOD;
	}

	return CTRL_BUSY;
}

/**
 * \brief This function transfers the USB MSC data to the memory
 *
 * \param addr Sector address to start write
 * \param nb_sector Number of sectors to transfer (sector=512 bytes)
 *
 * \return Ctrl_status
 */
Ctrl_status nand_flash_usb_write_10(uint32_t addr, uint16_t nb_sector)
{
	uint8_t nb_sector_trans;
	uint16_t page_data_size
		= nand_flash_model_get_page_data_size(MODEL(&nf_translation));

	if (nand_flash_status == NAND_FLASH_READY) {
		while (nb_sector) {
			nb_sector_trans = min(nb_sector, (page_data_size / SECTOR_SIZE));
			udi_msc_trans_block(false, (uint8_t *)nand_flash_usb_buffer,
					(nb_sector_trans * SECTOR_SIZE), NULL);
			if (nand_flash_write((addr * SECTOR_SIZE), nand_flash_usb_buffer,
					(nb_sector_trans * SECTOR_SIZE))) {
				return CTRL_FAIL;
			}
			nb_sector -= nb_sector_trans;
			addr += nb_sector_trans;
		}
		return CTRL_GOOD;
	}

	return CTRL_BUSY;
}

#endif  /* ACCESS_USB == true */

/* ------------ SPECIFIC FUNCTIONS FOR TRANSFER BY RAM ----------------- */

#if ACCESS_MEM_TO_RAM == true

#include <string.h>

/**
 * \brief This function tranfers 1 data sector from memory to RAM
 *
 * \param addr Sector address to start read
 * \param ram Address of RAM buffer
 *
 * \return Ctrl_status
 */
Ctrl_status nand_flash_mem_2_ram(uint32_t addr, void *ram)
{
	if (nand_flash_status == NAND_FLASH_READY) {
		if (!nand_flash_read((addr * SECTOR_SIZE), ram, SECTOR_SIZE)) {
			return CTRL_GOOD;
		}

		return CTRL_FAIL;
	}

	return CTRL_BUSY;
}

/**
 * \brief This function tranfers 1 data sector from RAM to memory
 *
 * \param addr Sector address to start write
 * \param ram Address of RAM buffer
 *
 * \return Ctrl_status
 */
Ctrl_status nand_flash_ram_2_mem(uint32_t addr, const void *ram)
{
	if (nand_flash_status == NAND_FLASH_READY) {
		if (!nand_flash_write((addr * SECTOR_SIZE), ram, SECTOR_SIZE)) {
			return CTRL_GOOD;
		}

		return CTRL_FAIL;
	}

	return CTRL_BUSY;
}

#endif  /* ACCESS_MEM_TO_RAM == true */
