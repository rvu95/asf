/**
 * \file
 *
 * \brief FLASHCALW example3 for SAM.
 *
 * Copyright (C) 2012 Atmel Corporation. All rights reserved.
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

/**
 * \mainpage
 * \section intro Introduction
 * This is the documentation for the data structures, functions, variables,
 * defines, enums, and typedefs for the FLASHCALW software driver.
 *
 * It also comes bundled with several examples. Using a Fibonacci calculation,
 * this example demonstrates how much the PicoCache feature can improve the 
 * execution speed.
 *
 * \note The PicoCache always has a positive impact in terms of power 
 * consumption (Explanation: since the PicoCache features allows to do less 
 * access to the Flash, the power consumption is therefore reduced). Note 
 * however that the PicoCache feature may have a negligible negative impact on 
 * the execution speed when there are no wait states on the Flash (which may be
 * the case when the CPU runs at 12MHz in some cases). See also the Flash
 * Characteristics in the electrical characteristics section of the datasheet
 * for more information.
 *
 * Operating mode of the example:
 *   -# After reset, the example will run without PicoCache.
 *   -# A Fibonacci calculation will be done.
 *   -# The power consumption of the calculation without PicoCache will be
 * displayed on the board monitor.
 *   -# The time spent on the Fibonacci will be displayed on the debug monitor.
 *   -# PicoCache will be enabled.
 *   -# The Fibonacci calculation will be done again.
 *   -# The power consumption of the calculation with PicoCache will be
 * displayed on the board monitor.
 *   -# The time spent on the Fibonacci will be displayed on the debug monitor.
 *   -# The cache hit number will be displayed on the debug monitor, which is
 * the cause of the performance improvement and power consumption decrease.
 *
 * \section files Main Files
 *   - flashcalw.c: FLASHCALW driver;
 *   - flashcalw.h: FLASHCALW driver header file;
 *   - time_tick_sam.c: Time tick utilities for getting the time spent on the 
 *   calculation;
 *   - time_tick.h: Time tick utilities header file;
 *   - flashcalw_example3.c: PicoCache access example application.
 *
 * \section compilinfo Compilation Information
 * This software is written for GNU GCC and IAR Embedded Workbench
 * for Atmel. Other compilers may or may not work.
 *
 * \section deviceinfo Device Information
 * SAM4L-EK devices with a FLASHCALW module can be used.
 *
 * \section configinfo Configuration Information
 * This example has been tested with the following configuration:
 * - SAM4L_EK evaluation kit;
 * - CPU clock: 48 MHz;
 * - USART2 (on SAM4L_EK) abstracted with a USB CDC connection to a PC;
 * - PC terminal settings:
 *   - 115200 bps,
 *   - 8 data bits,
 *   - no parity bit,
 *   - 1 stop bit,
 *   - no flow control.
 *
 * \section contactinfo Contact Information
 * For further information, visit
 * <A href="http://www.atmel.com">Atmel</A>.\n
 * Support and FAQ: http://support.atmel.no/
 */

#include <asf.h>
#include "time_tick.h"

/** Fibonacci number */
#define FIBONACCI_NUM    32

/**
 *  \brief Configure serial console.
 */
static void configure_console(void)
{
	const usart_serial_options_t uart_serial_options = {
		.baudrate = CONF_UART_BAUDRATE,
#ifdef CONF_UART_CHAR_LENGTH
		.charlength = CONF_UART_CHAR_LENGTH,
#endif
		.paritytype = CONF_UART_PARITY,
#ifdef CONF_UART_STOP_BITS
		.stopbits = CONF_UART_STOP_BITS,
#endif
	};

	/* Configure console UART. */
	stdio_serial_init(CONF_UART, &uart_serial_options);
}

/**
 *  \brief Recursively calculate the nth Fibonacci number.
 *
 * \param n Indicates which (positive) Fibonacci number to compute.
 *
 * \return The nth Fibonacci number.
 */
static uint32_t recfibo(uint32_t n)
{
	if (n == 0 || n == 1) {
		return n;
	}

	return recfibo(n - 2) + recfibo(n - 1);
}

/**
 * \brief This is an example demonstrating Fibonacci calculation
 *         with and without PicoCache.
 *
 * \param caption     Caption to print before running the example.
 * \param pico_enable Enable PicoCache or not.
 */
static void flash_picocache_example(const char *caption, bool pico_enable)
{
	uint32_t tick_start, time_ms;

	printf("\n\r--------------\n\r%s\n\r", caption);

	/* Enable PicoCache if required */
	if (pico_enable) {
		flashcalw_picocache_enable();

		flashcalw_picocache_set_monitor_mode(HCACHE_MCFG_MODE_IHIT);
		flashcalw_picocache_enable_monitor();
		flashcalw_picocache_reset_monitor();
	} else {
		flashcalw_picocache_disable();
		flashcalw_picocache_disable_monitor();
	}

	/* Get current time tick */
	tick_start = time_tick_get();

	/* Do the Fibonacci calculation. */
	recfibo(FIBONACCI_NUM);

	/* Calculate the Fibonacci spent time */
	time_ms = time_tick_calc_delay(tick_start, time_tick_get());
	if (time_ms) {
		printf("Time spent: %u ms\r\n", (unsigned int)time_ms);
	}

	/* Display cache hit counter */
	if (pico_enable) {
		printf("Pico cache instruction hit: %u \r\n",
			(unsigned int)flashcalw_picocache_get_monitor_cnt());
	}
}

/**
 * \brief main function. Do the Fibonacci calculation with and without
 * PicoCache and print the calculation time to the UART console.
 */
int main(void)
{
	/* Initialize the SAM system */
	sysclk_init();
	board_init();

	/* Initialize the console uart */
	configure_console();

	/* Output example information */
	printf("-- FLASHCALW Example3 --\r\n");
	printf("-- %s\n\r", BOARD_NAME);
	printf("-- Compiled: %s %s --\n\r", __DATE__, __TIME__);

	/* Intialize time tick utilities */
	time_tick_init(sysclk_get_cpu_hz());

	/* Calculate the Fibonacci without PicoCache */
	flash_picocache_example(
		"Fibonacci calculation without PicoCache",
		false);

	/* Calculate the Fibonacci with PicoCache */
	flash_picocache_example(
		"Fibonacci calculation with PicoCache",
		true);

	while (true) {
	}
}
