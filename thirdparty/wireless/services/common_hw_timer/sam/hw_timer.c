/**
 * @file hw_timer.c
 *
 * @brief
 *
 *  Copyright (c) 2014 Atmel Corporation. All rights reserved.
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
 */

#include <compiler.h>
#include <parts.h>
#include "tc.h"
#include "hw_timer.h"
#include "common_hw_timer.h"
#include "conf_hw_timer.h"

extern uint8_t timer_multiplier;
tmr_callback_t tmr_callback;

/* === Prototypes =========================================================== */
extern void sysclk_enable_peripheral_clock(const volatile void *module);
extern uint32_t sysclk_get_peripheral_bus_hz(const volatile void *module);
static void configure_NVIC(Tc *cmn_hw_timer, uint8_t cmn_hw_timer_ch);
static void tc_callback(void);

/*! \brief  read the actual timer count from register
 */
uint16_t tmr_read_count(void)
{
	return tc_read_cv(TIMER, TIMER_CHANNEL_ID);
}

/*! \brief  to save current interrupt status
 */
uint8_t save_cpu_interrupt(void)
{
	return cpu_irq_save();
}

/*! \brief  to restore saved interrupts status
 *  \param  saved interrupt status
 */
void restore_cpu_interrupt(uint8_t flags)
{
	cpu_irq_restore(flags);
}

/*! \brief  to stop the running timer
 */
void tmr_stop(void)
{
	tc_stop(TIMER, TIMER_CHANNEL_ID);
}

/*! \brief  to load compare value in channel compare register
 */
void tmr_write_cmpreg(uint16_t compare_value)
{
	tc_write_rc(TIMER, TIMER_CHANNEL_ID, compare_value);
}

/*! \brief  to initialiaze hw timer
 */
uint8_t tmr_init(void)
{
	uint8_t timer_multiplier;
	/* Configure clock service. */
	sysclk_enable_peripheral_clock(TIMER);

	/* Get system clock. */
	timer_multiplier = sysclk_get_peripheral_bus_hz(TIMER) / DEF_1MHZ;
	timer_multiplier = timer_multiplier >> 1;
	tc_init(TIMER, TIMER_CHANNEL_ID,
			TC_CMR_TCCLKS_TIMER_CLOCK2 | TC_CMR_WAVE |
			TC_CMR_WAVSEL_UP_NO_AUTO);

	/* Configure and enable interrupt on RC compare. */
	configure_NVIC(TIMER, TIMER_CHANNEL_ID);
	tc_enable_interrupt(TIMER, TIMER_CHANNEL_ID, TC_IER_COVFS);
	tmr_disable_cc_interrupt();
	tc_start(TIMER, TIMER_CHANNEL_ID);

	return timer_multiplier;
}

/*! \brief  to disable compare interrupt
 */
void tmr_disable_cc_interrupt(void)
{
	tc_get_status(TIMER, TIMER_CHANNEL_ID);
	tc_disable_interrupt(TIMER, TIMER_CHANNEL_ID, TC_IDR_CPCS);
}

/*! \brief  to enable compare interrupt
 */
void tmr_enable_cc_interrupt(void)
{
	tc_get_status( TIMER, TIMER_CHANNEL_ID);
	tc_enable_interrupt(TIMER, TIMER_CHANNEL_ID, TC_IER_CPCS);
}

/*! \brief  to disable overflow interrupt
 */
void tmr_disable_ovf_interrupt(void)
{
	/*! \brief  to enable overflow interrupt
	 */
	tc_get_status(TIMER, TIMER_CHANNEL_ID);
	tc_disable_interrupt(TIMER, TIMER_CHANNEL_ID, TC_IDR_COVFS);
}

/*! \brief  to enable the corresponding IRQ in NVIC and set the tme callback
 */
void configure_NVIC(Tc *cmn_hw_timer, uint8_t cmn_hw_timer_ch)
{
	if (TC0 == cmn_hw_timer) {
		switch (cmn_hw_timer_ch) {
		case 0:
			NVIC_EnableIRQ(TC00_IRQn);
			break;

		case 1:
			NVIC_EnableIRQ(TC01_IRQn);
			break;

		case 2:
			NVIC_EnableIRQ(TC02_IRQn);
			break;

		default:
			break;
		}
	} else if (TC1 == cmn_hw_timer) {
		switch (cmn_hw_timer_ch) {
		case 0:
			NVIC_EnableIRQ(TC10_IRQn);
			break;

		case 1:
			NVIC_EnableIRQ(TC11_IRQn);
			break;

		case 2:
			NVIC_EnableIRQ(TC12_IRQn);
			break;

		default:
			break;
		}
	}

	tmr_callback = tc_callback;
}

/**
 * \brief callback for tmr interrupt
 */
void tc_callback(void)
{
	uint32_t ul_status;

	/* Read TC0 Status. */
	ul_status = tc_get_status(TIMER, TIMER_CHANNEL_ID);
	ul_status &= tc_get_interrupt_mask(TIMER, TIMER_CHANNEL_ID);
	if (TC_SR_CPCS == (ul_status & TC_SR_CPCS)) {
		tmr_cca_callback();
	}

	/* Overflow */
	if (TC_SR_COVFS == (ul_status & TC_SR_COVFS)) {
		tmr_ovf_callback();
	}
}

/**
 * \brief Interrupt handler for TC00
 */
void TC00_Handler(void)
{
	if (tmr_callback) {
		tmr_callback();
	}
}

/**
 * \brief Interrupt handler for TC01
 */
void TC01_Handler(void)
{
	if (tmr_callback) {
		tmr_callback();
	}
}

/**
 * \brief Interrupt handler for TC02
 */
void TC02_Handler(void)
{
	if (tmr_callback) {
		tmr_callback();
	}
}

/**
 * \brief Interrupt handlers for TC10
 */
void TC10_Handler(void)
{
	if (tmr_callback) {
		tmr_callback();
	}
}

/**
 * \brief Interrupt handler for TC11
 */
void TC11_Handler(void)
{
	if (tmr_callback) {
		tmr_callback();
	}
}

/**
 * \brief Interrupt handler for TC12
 */
void TC12_Handler(void)
{
	if (tmr_callback) {
		tmr_callback();
	}
}

/* EOF */
