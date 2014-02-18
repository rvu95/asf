/**
 * \file
 *
 * \brief index.html virtual file for the FreeRTOS Web/DSP Demo.
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
 #ifndef __INDEX_HTML_H__
#define __INDEX_HTML_H__

const unsigned int index_size = 5264;

const unsigned char index_html[] = {
0x3c,0x21,0x44,0x4f,0x43,0x54,0x59,0x50,0x45,0x20,0x48,0x54,0x4d,0x4c,0x20,
0x50,0x55,0x42,0x4c,0x49,0x43,0x20,0x22,0x2d,0x2f,0x2f,0x57,0x33,0x43,0x2f,
0x2f,0x44,0x54,0x44,0x20,0x48,0x54,0x4d,0x4c,0x20,0x34,0x2e,0x30,0x31,0x20,
0x54,0x72,0x61,0x6e,0x73,0x69,0x74,0x69,0x6f,0x6e,0x61,0x6c,0x2f,0x2f,0x45,
0x4e,0x22,0x0d,0x0a,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,
0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f,0x54,0x52,0x2f,0x68,0x74,0x6d,0x6c,
0x34,0x2f,0x6c,0x6f,0x6f,0x73,0x65,0x2e,0x64,0x74,0x64,0x22,0x3e,0x0d,0x0a,
0x3c,0x68,0x74,0x6d,0x6c,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74,
0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,
0x2f,0x31,0x39,0x39,0x39,0x2f,0x78,0x68,0x74,0x6d,0x6c,0x22,0x3e,0x0d,0x0a,
0x09,0x3c,0x68,0x65,0x61,0x64,0x3e,0x0d,0x0a,0x09,0x09,0x3c,0x6d,0x65,0x74,
0x61,0x20,0x68,0x74,0x74,0x70,0x2d,0x65,0x71,0x75,0x69,0x76,0x3d,0x22,0x43,
0x6f,0x6e,0x74,0x65,0x6e,0x74,0x2d,0x54,0x79,0x70,0x65,0x22,0x20,0x63,0x6f,
0x6e,0x74,0x65,0x6e,0x74,0x3d,0x22,0x74,0x65,0x78,0x74,0x2f,0x68,0x74,0x6d,
0x6c,0x3b,0x20,0x63,0x68,0x61,0x72,0x73,0x65,0x74,0x3d,0x75,0x74,0x66,0x2d,
0x38,0x22,0x20,0x2f,0x3e,0x0d,0x0a,0x09,0x09,0x3c,0x74,0x69,0x74,0x6c,0x65,
0x3e,0x41,0x54,0x4d,0x45,0x4c,0x20,0x53,0x41,0x4d,0x20,0x77,0x65,0x62,0x20,
0x73,0x65,0x72,0x76,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x44,0x53,0x50,0x20,
0x64,0x65,0x6d,0x6f,0x3c,0x2f,0x74,0x69,0x74,0x6c,0x65,0x3e,0x0d,0x0a,0x09,
0x09,0x3c,0x6c,0x69,0x6e,0x6b,0x20,0x72,0x65,0x6c,0x3d,0x22,0x73,0x74,0x79,
0x6c,0x65,0x73,0x68,0x65,0x65,0x74,0x22,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,
0x74,0x65,0x78,0x74,0x2f,0x63,0x73,0x73,0x22,0x20,0x6d,0x65,0x64,0x69,0x61,
0x3d,0x22,0x73,0x63,0x72,0x65,0x65,0x6e,0x22,0x20,0x68,0x72,0x65,0x66,0x3d,
0x22,0x65,0x74,0x63,0x2f,0x73,0x74,0x79,0x6c,0x65,0x2e,0x63,0x73,0x73,0x22,
0x20,0x2f,0x3e,0x0d,0x0a,0x09,0x09,0x3c,0x73,0x63,0x72,0x69,0x70,0x74,0x20,
0x74,0x79,0x70,0x65,0x3d,0x22,0x74,0x65,0x78,0x74,0x2f,0x6a,0x61,0x76,0x61,
0x73,0x63,0x72,0x69,0x70,0x74,0x22,0x20,0x73,0x72,0x63,0x3d,0x22,0x65,0x74,
0x63,0x2f,0x6a,0x73,0x2f,0x6a,0x71,0x75,0x65,0x72,0x79,0x2e,0x6a,0x73,0x22,
0x3e,0x3c,0x2f,0x73,0x63,0x72,0x69,0x70,0x74,0x3e,0x0d,0x0a,0x09,0x09,0x3c,
0x73,0x63,0x72,0x69,0x70,0x74,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x74,0x65,
0x78,0x74,0x2f,0x6a,0x61,0x76,0x61,0x73,0x63,0x72,0x69,0x70,0x74,0x22,0x20,
0x73,0x72,0x63,0x3d,0x22,0x65,0x74,0x63,0x2f,0x6a,0x73,0x2f,0x65,0x78,0x63,
0x61,0x6e,0x2e,0x6a,0x73,0x22,0x3e,0x3c,0x2f,0x73,0x63,0x72,0x69,0x70,0x74,
0x3e,0x0d,0x0a,0x09,0x09,0x3c,0x73,0x63,0x72,0x69,0x70,0x74,0x20,0x74,0x79,
0x70,0x65,0x3d,0x22,0x74,0x65,0x78,0x74,0x2f,0x6a,0x61,0x76,0x61,0x73,0x63,
0x72,0x69,0x70,0x74,0x22,0x20,0x73,0x72,0x63,0x3d,0x22,0x65,0x74,0x63,0x2f,
0x6a,0x73,0x2f,0x6a,0x71,0x66,0x6c,0x6f,0x74,0x2e,0x6a,0x73,0x22,0x3e,0x3c,
0x2f,0x73,0x63,0x72,0x69,0x70,0x74,0x3e,0x0d,0x0a,0x09,0x09,0x3c,0x73,0x63,
0x72,0x69,0x70,0x74,0x20,0x74,0x79,0x70,0x65,0x3d,0x22,0x74,0x65,0x78,0x74,
0x2f,0x6a,0x61,0x76,0x61,0x73,0x63,0x72,0x69,0x70,0x74,0x22,0x3e,0x0d,0x0a,
0x09,0x09,0x09,0x24,0x28,0x64,0x6f,0x63,0x75,0x6d,0x65,0x6e,0x74,0x29,0x2e,
0x72,0x65,0x61,0x64,0x79,0x28,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,
0x29,0x20,0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x24,0x2e,0x61,0x6a,0x61,0x78,
0x28,0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x75,0x72,0x6c,0x3a,
0x20,0x22,0x67,0x65,0x74,0x5f,0x63,0x68,0x69,0x70,0x69,0x6e,0x66,0x6f,0x22,
0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x64,0x61,0x74,0x61,0x54,
0x79,0x70,0x65,0x20,0x3a,0x27,0x6a,0x73,0x6f,0x6e,0x27,0x2c,0x0d,0x0a,0x09,
0x09,0x09,0x09,0x09,0x20,0x20,0x61,0x73,0x79,0x6e,0x63,0x3a,0x20,0x66,0x61,
0x6c,0x73,0x65,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x63,0x61,
0x63,0x68,0x65,0x3a,0x20,0x66,0x61,0x6c,0x73,0x65,0x2c,0x0d,0x0a,0x09,0x09,
0x09,0x09,0x09,0x20,0x20,0x73,0x75,0x63,0x63,0x65,0x73,0x73,0x3a,0x20,0x66,
0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x64,0x61,0x74,0x61,0x29,0x7b,0x0d,
0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x20,0x20,0x09,0x24,0x2e,0x65,0x61,
0x63,0x68,0x28,0x64,0x61,0x74,0x61,0x2c,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,
0x6e,0x28,0x6b,0x2c,0x76,0x29,0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,
0x20,0x20,0x20,0x09,0x09,0x24,0x28,0x27,0x23,0x27,0x2b,0x6b,0x29,0x2e,0x74,
0x65,0x78,0x74,0x28,0x76,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,
0x20,0x20,0x20,0x09,0x7d,0x29,0x3b,0x0d,0x0a,0x20,0x20,0x20,0x09,0x09,0x09,
0x09,0x09,0x20,0x20,0x7d,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x7d,0x29,0x3b,
0x0d,0x0a,0x20,0x20,0x20,0x09,0x09,0x09,0x09,0x76,0x61,0x72,0x20,0x73,0x65,
0x74,0x5f,0x6c,0x65,0x64,0x5f,0x73,0x74,0x61,0x74,0x75,0x73,0x20,0x3d,0x20,
0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x65,0x6c,0x6d,0x2c,0x73,0x74,
0x61,0x74,0x75,0x73,0x29,0x20,0x7b,0x0d,0x0a,0x0d,0x0a,0x20,0x20,0x20,0x09,
0x09,0x09,0x09,0x09,0x69,0x66,0x20,0x28,0x73,0x74,0x61,0x74,0x75,0x73,0x20,
0x3d,0x3d,0x20,0x31,0x29,0x20,0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,
0x65,0x6c,0x6d,0x2e,0x61,0x64,0x64,0x43,0x6c,0x61,0x73,0x73,0x28,0x27,0x6c,
0x65,0x64,0x2d,0x6f,0x6e,0x27,0x29,0x2e,0x72,0x65,0x6d,0x6f,0x76,0x65,0x43,
0x6c,0x61,0x73,0x73,0x28,0x27,0x6c,0x65,0x64,0x2d,0x6f,0x66,0x66,0x27,0x29,
0x2e,0x74,0x65,0x78,0x74,0x28,0x27,0x4f,0x4e,0x27,0x29,0x2e,0x61,0x70,0x70,
0x65,0x6e,0x64,0x28,0x22,0x3c,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x2f,0x73,0x70,
0x61,0x6e,0x3e,0x22,0x29,0x3b,0x0d,0x0a,0x20,0x20,0x20,0x09,0x09,0x09,0x09,
0x09,0x7d,0x20,0x65,0x6c,0x73,0x65,0x20,0x7b,0x0d,0x0a,0x20,0x20,0x20,0x09,
0x09,0x09,0x09,0x09,0x09,0x65,0x6c,0x6d,0x2e,0x61,0x64,0x64,0x43,0x6c,0x61,
0x73,0x73,0x28,0x27,0x6c,0x65,0x64,0x2d,0x6f,0x66,0x66,0x27,0x29,0x2e,0x72,
0x65,0x6d,0x6f,0x76,0x65,0x43,0x6c,0x61,0x73,0x73,0x28,0x27,0x6c,0x65,0x64,
0x2d,0x6f,0x6e,0x27,0x29,0x2e,0x74,0x65,0x78,0x74,0x28,0x27,0x4f,0x46,0x46,
0x27,0x29,0x2e,0x70,0x72,0x65,0x70,0x65,0x6e,0x64,0x28,0x22,0x3c,0x73,0x70,
0x61,0x6e,0x3e,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x22,0x29,0x3b,0x0d,0x0a,
0x09,0x20,0x20,0x20,0x09,0x09,0x09,0x09,0x7d,0x0d,0x0a,0x20,0x20,0x20,0x09,
0x09,0x09,0x09,0x7d,0x0d,0x0a,0x20,0x20,0x20,0x09,0x09,0x09,0x09,0x24,0x28,
0x22,0x73,0x70,0x61,0x6e,0x5b,0x69,0x64,0x5e,0x3d,0x6c,0x65,0x64,0x5d,0x22,
0x29,0x2e,0x63,0x6c,0x69,0x63,0x6b,0x28,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,
0x6e,0x28,0x29,0x7b,0x0d,0x0a,0x20,0x20,0x20,0x09,0x09,0x09,0x09,0x09,0x76,
0x61,0x72,0x20,0x65,0x6c,0x6d,0x20,0x3d,0x20,0x24,0x28,0x74,0x68,0x69,0x73,
0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x69,0x66,0x20,0x28,0x65,0x6c,
0x6d,0x2e,0x68,0x61,0x73,0x43,0x6c,0x61,0x73,0x73,0x28,0x27,0x6c,0x65,0x64,
0x2d,0x6f,0x66,0x66,0x27,0x29,0x29,0x20,0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,
0x09,0x09,0x76,0x61,0x72,0x20,0x73,0x74,0x61,0x74,0x75,0x73,0x20,0x3d,0x20,
0x31,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x7d,0x20,0x65,0x6c,0x73,0x65,
0x20,0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x76,0x61,0x72,0x20,0x73,
0x74,0x61,0x74,0x75,0x73,0x20,0x3d,0x20,0x30,0x3b,0x0d,0x0a,0x09,0x09,0x09,
0x09,0x09,0x7d,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x73,0x65,0x74,0x5f,0x6c,
0x65,0x64,0x5f,0x73,0x74,0x61,0x74,0x75,0x73,0x28,0x65,0x6c,0x6d,0x2c,0x20,
0x73,0x74,0x61,0x74,0x75,0x73,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x24,0x2e,0x61,0x6a,0x61,0x78,0x28,0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x20,0x20,0x75,0x72,0x6c,0x3a,0x20,0x22,0x73,0x65,0x74,0x5f,0x6c,0x65,0x64,
0x22,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x61,0x73,0x79,0x6e,
0x63,0x3a,0x20,0x66,0x61,0x6c,0x73,0x65,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,
0x09,0x20,0x20,0x63,0x61,0x63,0x68,0x65,0x3a,0x20,0x66,0x61,0x6c,0x73,0x65,
0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x64,0x61,0x74,0x61,0x3a,
0x7b,0x27,0x6e,0x27,0x3a,0x65,0x6c,0x6d,0x2e,0x61,0x74,0x74,0x72,0x28,0x27,
0x6e,0x61,0x6d,0x65,0x27,0x29,0x2c,0x27,0x73,0x65,0x74,0x27,0x3a,0x73,0x74,
0x61,0x74,0x75,0x73,0x7d,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,
0x64,0x61,0x74,0x61,0x54,0x79,0x70,0x65,0x20,0x3a,0x27,0x6a,0x73,0x6f,0x6e,
0x27,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x73,0x75,0x63,0x63,
0x65,0x73,0x73,0x3a,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x29,
0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x7d,0x0d,0x0a,0x09,0x09,
0x09,0x09,0x09,0x7d,0x29,0x3b,0x0d,0x0a,0x20,0x20,0x20,0x09,0x09,0x09,0x09,
0x7d,0x29,0x3b,0x0d,0x0a,0x20,0x20,0x20,0x09,0x09,0x09,0x09,0x76,0x61,0x72,
0x20,0x6f,0x70,0x74,0x69,0x6f,0x6e,0x73,0x20,0x3d,0x20,0x7b,0x0d,0x0a,0x09,
0x09,0x09,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x73,0x65,0x72,0x69,0x65,
0x73,0x3a,0x20,0x7b,0x20,0x73,0x68,0x61,0x64,0x6f,0x77,0x53,0x69,0x7a,0x65,
0x3a,0x20,0x30,0x20,0x7d,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x79,0x61,0x78,0x69,0x73,0x3a,0x20,0x20,0x7b,0x20,0x6d,
0x69,0x6e,0x3a,0x20,0x30,0x2c,0x20,0x6d,0x61,0x78,0x3a,0x20,0x31,0x30,0x30,
0x20,0x7d,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x78,0x61,0x78,0x69,0x73,0x3a,0x20,0x20,0x7b,0x20,0x6d,0x69,0x6e,0x3a,
0x20,0x30,0x2c,0x20,0x6d,0x61,0x78,0x3a,0x20,0x31,0x30,0x30,0x30,0x30,0x20,
0x7d,0x0d,0x0a,0x09,0x09,0x09,0x20,0x20,0x20,0x20,0x7d,0x3b,0x0d,0x0a,0x0d,
0x0a,0x09,0x09,0x09,0x09,0x76,0x61,0x72,0x20,0x6d,0x61,0x67,0x6e,0x69,0x74,
0x75,0x64,0x65,0x5f,0x64,0x61,0x74,0x61,0x20,0x3d,0x20,0x5b,0x5d,0x3b,0x0d,
0x0a,0x09,0x09,0x09,0x09,0x76,0x61,0x72,0x20,0x70,0x6c,0x6f,0x74,0x5f,0x6d,
0x61,0x67,0x6e,0x69,0x74,0x75,0x64,0x65,0x20,0x3d,0x20,0x24,0x2e,0x70,0x6c,
0x6f,0x74,0x28,0x24,0x28,0x22,0x23,0x6d,0x61,0x67,0x6e,0x69,0x74,0x75,0x64,
0x65,0x2d,0x70,0x6c,0x6f,0x74,0x22,0x29,0x2c,0x20,0x5b,0x7b,0x6c,0x61,0x62,
0x65,0x6c,0x3a,0x20,0x22,0x4d,0x61,0x67,0x6e,0x69,0x74,0x75,0x64,0x65,0x22,
0x2c,0x20,0x64,0x61,0x74,0x61,0x3a,0x6d,0x61,0x67,0x6e,0x69,0x74,0x75,0x64,
0x65,0x5f,0x64,0x61,0x74,0x61,0x7d,0x5d,0x2c,0x20,0x6f,0x70,0x74,0x69,0x6f,
0x6e,0x73,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x76,0x61,0x72,0x20,0x72,
0x65,0x67,0x20,0x3d,0x20,0x6e,0x65,0x77,0x20,0x52,0x65,0x67,0x45,0x78,0x70,
0x28,0x22,0x5b,0x7c,0x5d,0x2b,0x22,0x2c,0x20,0x22,0x67,0x22,0x29,0x3b,0x0d,
0x0a,0x0d,0x0a,0x09,0x09,0x09,0x20,0x20,0x20,0x20,0x66,0x75,0x6e,0x63,0x74,
0x69,0x6f,0x6e,0x20,0x75,0x70,0x64,0x61,0x74,0x65,0x53,0x74,0x61,0x74,0x75,
0x73,0x28,0x29,0x20,0x7b,0x0d,0x0a,0x0d,0x0a,0x09,0x09,0x09,0x24,0x2e,0x61,
0x6a,0x61,0x78,0x28,0x7b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x75,
0x72,0x6c,0x3a,0x20,0x22,0x73,0x74,0x61,0x74,0x75,0x73,0x22,0x2c,0x0d,0x0a,
0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x61,0x73,0x79,0x6e,0x63,0x3a,0x20,0x66,
0x61,0x6c,0x73,0x65,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x63,
0x61,0x63,0x68,0x65,0x3a,0x20,0x66,0x61,0x6c,0x73,0x65,0x2c,0x0d,0x0a,0x09,
0x09,0x09,0x09,0x09,0x20,0x20,0x64,0x61,0x74,0x61,0x54,0x79,0x70,0x65,0x20,
0x3a,0x27,0x6a,0x73,0x6f,0x6e,0x27,0x2c,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x20,0x20,0x73,0x75,0x63,0x63,0x65,0x73,0x73,0x3a,0x20,0x66,0x75,0x6e,0x63,
0x74,0x69,0x6f,0x6e,0x28,0x64,0x61,0x74,0x61,0x29,0x7b,0x0d,0x0a,0x0d,0x0a,
0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x24,0x28,0x27,0x23,0x70,0x6f,0x74,0x65,
0x6e,0x74,0x69,0x6f,0x6d,0x65,0x74,0x65,0x72,0x27,0x29,0x2e,0x77,0x69,0x64,
0x74,0x68,0x28,0x32,0x30,0x30,0x2a,0x28,0x70,0x61,0x72,0x73,0x65,0x49,0x6e,
0x74,0x28,0x64,0x61,0x74,0x61,0x5b,0x27,0x76,0x6f,0x6c,0x74,0x27,0x5d,0x29,
0x2f,0x34,0x30,0x39,0x35,0x29,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x09,0x20,0x24,0x28,0x27,0x23,0x70,0x6f,0x74,0x65,0x6e,0x74,0x69,0x6f,0x6d,
0x65,0x74,0x65,0x72,0x2d,0x76,0x61,0x6c,0x75,0x65,0x27,0x29,0x2e,0x74,0x65,
0x78,0x74,0x28,0x64,0x61,0x74,0x61,0x5b,0x27,0x76,0x6f,0x6c,0x74,0x27,0x5d,
0x29,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x24,0x28,0x27,0x23,0x75,
0x70,0x74,0x69,0x6d,0x65,0x27,0x29,0x2e,0x74,0x65,0x78,0x74,0x28,0x64,0x61,
0x74,0x61,0x5b,0x27,0x75,0x70,0x5f,0x74,0x69,0x6d,0x65,0x27,0x5d,0x20,0x2b,
0x27,0x20,0x73,0x65,0x63,0x27,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x09,0x20,0x24,0x28,0x27,0x23,0x74,0x65,0x6d,0x70,0x65,0x72,0x61,0x74,0x75,
0x72,0x65,0x27,0x29,0x2e,0x74,0x65,0x78,0x74,0x28,0x64,0x61,0x74,0x61,0x5b,
0x27,0x74,0x65,0x6d,0x70,0x27,0x5d,0x2b,0x27,0x20,0xc2,0xb0,0x43,0x27,0x29,
0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x24,0x28,0x27,0x23,0x6c,
0x6f,0x63,0x61,0x6c,0x5f,0x69,0x70,0x27,0x29,0x2e,0x74,0x65,0x78,0x74,0x28,
0x64,0x61,0x74,0x61,0x5b,0x27,0x6c,0x6f,0x63,0x61,0x6c,0x5f,0x69,0x70,0x27,
0x5d,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x24,0x28,0x27,
0x23,0x6c,0x61,0x73,0x74,0x5f,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x65,0x64,
0x5f,0x69,0x70,0x27,0x29,0x2e,0x74,0x65,0x78,0x74,0x28,0x64,0x61,0x74,0x61,
0x5b,0x27,0x6c,0x61,0x73,0x74,0x5f,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x65,
0x64,0x5f,0x69,0x70,0x27,0x5d,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x09,0x20,0x24,0x28,0x27,0x23,0x74,0x6f,0x74,0x5f,0x72,0x65,0x71,0x27,0x29,
0x2e,0x74,0x65,0x78,0x74,0x28,0x64,0x61,0x74,0x61,0x5b,0x27,0x74,0x6f,0x74,
0x5f,0x72,0x65,0x71,0x27,0x5d,0x29,0x3b,0x0d,0x0a,0x0d,0x0a,0x09,0x09,0x09,
0x09,0x09,0x09,0x20,0x24,0x2e,0x65,0x61,0x63,0x68,0x28,0x64,0x61,0x74,0x61,
0x5b,0x27,0x6c,0x65,0x64,0x73,0x27,0x5d,0x2c,0x20,0x66,0x75,0x6e,0x63,0x74,
0x69,0x6f,0x6e,0x20,0x28,0x6b,0x65,0x79,0x2c,0x76,0x29,0x20,0x7b,0x0d,0x0a,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x73,0x65,0x74,0x5f,0x6c,0x65,0x64,0x5f,
0x73,0x74,0x61,0x74,0x75,0x73,0x28,0x24,0x28,0x27,0x23,0x6c,0x65,0x64,0x2d,
0x27,0x20,0x2b,0x20,0x6b,0x65,0x79,0x29,0x2c,0x20,0x76,0x29,0x3b,0x0d,0x0a,
0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x7d,0x29,0x3b,0x0d,0x0a,0x0d,0x0a,0x09,
0x09,0x09,0x09,0x09,0x09,0x20,0x6d,0x61,0x67,0x6e,0x69,0x74,0x75,0x64,0x65,
0x5f,0x64,0x61,0x74,0x61,0x2e,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0x3d,0x20,
0x30,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x76,0x61,0x72,0x20,
0x74,0x61,0x62,0x20,0x3d,0x20,0x64,0x61,0x74,0x61,0x5b,0x27,0x6d,0x61,0x67,
0x27,0x5d,0x2e,0x73,0x70,0x6c,0x69,0x74,0x28,0x72,0x65,0x67,0x29,0x3b,0x0d,
0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x66,0x6f,0x72,0x20,0x28,0x76,0x61,
0x72,0x20,0x69,0x20,0x3d,0x20,0x30,0x3b,0x20,0x69,0x20,0x3c,0x20,0x74,0x61,
0x62,0x2e,0x6c,0x65,0x6e,0x67,0x74,0x68,0x3b,0x20,0x69,0x2b,0x2b,0x29,0x0d,
0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x6d,0x61,0x67,0x6e,0x69,0x74,
0x75,0x64,0x65,0x5f,0x64,0x61,0x74,0x61,0x2e,0x70,0x75,0x73,0x68,0x28,0x5b,
0x69,0x2a,0x31,0x30,0x30,0x2c,0x74,0x61,0x62,0x5b,0x69,0x5d,0x5d,0x29,0x3b,
0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x70,0x6c,0x6f,0x74,0x5f,0x6d,
0x61,0x67,0x6e,0x69,0x74,0x75,0x64,0x65,0x2e,0x73,0x65,0x74,0x44,0x61,0x74,
0x61,0x28,0x5b,0x7b,0x6c,0x61,0x62,0x65,0x6c,0x3a,0x20,0x22,0x4d,0x61,0x67,
0x6e,0x69,0x74,0x75,0x64,0x65,0x22,0x2c,0x20,0x64,0x61,0x74,0x61,0x3a,0x6d,
0x61,0x67,0x6e,0x69,0x74,0x75,0x64,0x65,0x5f,0x64,0x61,0x74,0x61,0x7d,0x5d,
0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x20,0x70,0x6c,0x6f,0x74,
0x5f,0x6d,0x61,0x67,0x6e,0x69,0x74,0x75,0x64,0x65,0x2e,0x73,0x65,0x74,0x75,
0x70,0x47,0x72,0x69,0x64,0x28,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x09,0x20,0x70,0x6c,0x6f,0x74,0x5f,0x6d,0x61,0x67,0x6e,0x69,0x74,0x75,0x64,
0x65,0x2e,0x64,0x72,0x61,0x77,0x28,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,
0x09,0x09,0x20,0x73,0x65,0x74,0x54,0x69,0x6d,0x65,0x6f,0x75,0x74,0x28,0x75,
0x70,0x64,0x61,0x74,0x65,0x53,0x74,0x61,0x74,0x75,0x73,0x2c,0x20,0x32,0x35,
0x30,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x20,0x20,0x7d,0x0d,0x0a,
0x09,0x09,0x09,0x09,0x09,0x7d,0x29,0x3b,0x0d,0x0a,0x09,0x09,0x09,0x20,0x20,
0x20,0x20,0x7d,0x0d,0x0a,0x09,0x09,0x09,0x20,0x20,0x20,0x75,0x70,0x64,0x61,
0x74,0x65,0x53,0x74,0x61,0x74,0x75,0x73,0x28,0x29,0x3b,0x0d,0x0a,0x09,0x09,
0x09,0x7d,0x29,0x3b,0x0d,0x0a,0x0d,0x0a,0x09,0x09,0x3c,0x2f,0x73,0x63,0x72,
0x69,0x70,0x74,0x3e,0x0d,0x0a,0x09,0x3c,0x2f,0x68,0x65,0x61,0x64,0x3e,0x0d,
0x0a,0x09,0x3c,0x62,0x6f,0x64,0x79,0x3e,0x0d,0x0a,0x0d,0x0a,0x09,0x09,0x3c,
0x64,0x69,0x76,0x20,0x69,0x64,0x3d,0x22,0x77,0x72,0x61,0x70,0x70,0x65,0x72,
0x22,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x3c,0x64,0x69,0x76,0x20,0x69,0x64,0x3d,
0x22,0x63,0x6f,0x6e,0x74,0x65,0x69,0x6e,0x65,0x72,0x22,0x3e,0x0d,0x0a,0x09,
0x09,0x09,0x09,0x3c,0x64,0x69,0x76,0x20,0x69,0x64,0x3d,0x22,0x68,0x65,0x61,
0x64,0x65,0x72,0x22,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x69,0x6d,
0x67,0x20,0x73,0x72,0x63,0x3d,0x22,0x65,0x74,0x63,0x2f,0x69,0x6d,0x67,0x2f,
0x61,0x74,0x6d,0x65,0x6c,0x2e,0x70,0x6e,0x67,0x22,0x20,0x61,0x6c,0x74,0x3d,
0x22,0x41,0x54,0x4d,0x45,0x4c,0x20,0x4c,0x6f,0x67,0x6f,0x22,0x20,0x2f,0x3e,
0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x09,
0x09,0x09,0x09,0x09,0x09,0x3c,0x68,0x31,0x3e,0x57,0x65,0x62,0x20,0x73,0x65,
0x72,0x76,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x44,0x53,0x50,0x20,0x64,0x65,
0x6d,0x6f,0x3c,0x2f,0x68,0x31,0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,
0x09,0x09,0x09,0x09,0x3c,0x68,0x33,0x3e,0x52,0x65,0x6d,0x6f,0x74,0x65,0x6c,
0x79,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x20,0x79,0x6f,0x75,0x72,0x20,
0x62,0x6f,0x61,0x72,0x64,0x20,0x76,0x69,0x61,0x20,0x77,0x65,0x62,0x20,0x62,
0x72,0x6f,0x77,0x73,0x65,0x72,0x3c,0x2f,0x68,0x33,0x3e,0x0d,0x0a,0x09,0x09,
0x09,0x09,0x09,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,
0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x3c,0x64,0x69,
0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x63,0x6f,0x6e,0x74,0x65,0x6e,
0x74,0x22,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x48,0x61,
0x72,0x64,0x77,0x61,0x72,0x65,0x20,0x49,0x6e,0x66,0x6f,0x3a,0x3c,0x2f,0x62,
0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,
0x43,0x50,0x55,0x20,0x43,0x6f,0x72,0x65,0x3a,0x20,0x3c,0x2f,0x62,0x3e,0x3c,
0x73,0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x63,0x6f,0x72,0x65,0x5f,0x6e,
0x61,0x6d,0x65,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,
0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x43,0x68,
0x69,0x70,0x20,0x6e,0x61,0x6d,0x65,0x3a,0x20,0x3c,0x2f,0x62,0x3e,0x3c,0x73,
0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x61,0x72,0x63,0x68,0x5f,0x6e,0x61,
0x6d,0x65,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x62,
0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x53,0x52,0x41,
0x4d,0x20,0x73,0x69,0x7a,0x65,0x3a,0x20,0x3c,0x2f,0x62,0x3e,0x3c,0x73,0x70,
0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x73,0x72,0x61,0x6d,0x5f,0x73,0x69,0x7a,
0x65,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x62,0x72,
0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x46,0x6c,0x61,0x73,
0x68,0x20,0x73,0x69,0x7a,0x65,0x3a,0x20,0x3c,0x2f,0x62,0x3e,0x3c,0x73,0x70,
0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x66,0x6c,0x61,0x73,0x68,0x5f,0x73,0x69,
0x7a,0x65,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x62,
0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x41,0x75,0x64,
0x69,0x6f,0x20,0x6f,0x75,0x74,0x3a,0x20,0x3c,0x2f,0x62,0x3e,0x4a,0x31,0x30,
0x20,0x61,0x75,0x64,0x69,0x6f,0x20,0x6a,0x61,0x63,0x6b,0x3c,0x62,0x72,0x3e,
0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x42,0x6f,0x6f,0x74,0x20,
0x66,0x72,0x6f,0x6d,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x3a,0x20,0x3c,0x2f,
0x62,0x3e,0x3c,0x73,0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x6d,0x65,0x6d,
0x5f,0x62,0x6f,0x6f,0x74,0x5f,0x74,0x79,0x70,0x65,0x22,0x3e,0x2d,0x2d,0x3c,
0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x62,0x72,0x3e,0x3c,0x62,0x72,0x3e,0x0d,
0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x43,0x6f,0x6e,0x6e,0x65,0x63,
0x74,0x69,0x6f,0x6e,0x73,0x20,0x49,0x6e,0x66,0x6f,0x3a,0x3c,0x2f,0x62,0x3e,
0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x42,
0x6f,0x61,0x72,0x64,0x20,0x49,0x50,0x3a,0x20,0x3c,0x2f,0x62,0x3e,0x3c,0x73,
0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x6c,0x6f,0x63,0x61,0x6c,0x5f,0x69,
0x70,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x62,0x72,
0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x59,0x6f,0x75,0x72,
0x20,0x49,0x50,0x3a,0x20,0x3c,0x2f,0x62,0x3e,0x3c,0x73,0x70,0x61,0x6e,0x20,
0x69,0x64,0x3d,0x22,0x6c,0x61,0x73,0x74,0x5f,0x63,0x6f,0x6e,0x6e,0x65,0x63,
0x74,0x65,0x64,0x5f,0x69,0x70,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,
0x6e,0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,
0x3e,0x54,0x6f,0x74,0x61,0x6c,0x20,0x73,0x74,0x61,0x74,0x75,0x73,0x20,0x72,
0x65,0x71,0x75,0x65,0x73,0x74,0x73,0x3a,0x20,0x3c,0x2f,0x62,0x3e,0x3c,0x73,
0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x74,0x6f,0x74,0x5f,0x72,0x65,0x71,
0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x62,0x72,0x3e,
0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x50,0x72,0x65,0x73,
0x73,0x20,0x62,0x75,0x74,0x74,0x6f,0x6e,0x20,0x22,0x42,0x50,0x33,0x22,0x20,
0x74,0x6f,0x20,0x73,0x77,0x69,0x74,0x63,0x68,0x20,0x62,0x65,0x74,0x77,0x65,
0x65,0x6e,0x20,0x77,0x61,0x76,0x65,0x20,0x66,0x69,0x6c,0x65,0x20,0x6c,0x6f,
0x6f,0x70,0x62,0x61,0x63,0x6b,0x20,0x61,0x6e,0x64,0x20,0x67,0x65,0x6e,0x65,
0x72,0x61,0x74,0x65,0x64,0x20,0x73,0x69,0x6e,0x75,0x73,0x20,0x6d,0x6f,0x64,
0x65,0x2e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x50,0x6f,
0x74,0x65,0x6e,0x74,0x69,0x6f,0x6d,0x65,0x74,0x65,0x72,0x20,0x63,0x61,0x6e,
0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x74,0x6f,0x20,0x63,0x68,0x61,
0x6e,0x67,0x65,0x20,0x73,0x69,0x6e,0x75,0x73,0x20,0x66,0x72,0x65,0x71,0x75,
0x65,0x6e,0x63,0x79,0x20,0x69,0x6e,0x20,0x73,0x69,0x6e,0x75,0x73,0x20,0x6d,
0x6f,0x64,0x65,0x2e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x55,0x73,0x65,0x20,0x51,0x54,0x6f,0x75,0x63,0x68,0x20,0x73,0x6c,0x69,0x64,
0x65,0x72,0x20,0x74,0x6f,0x20,0x63,0x68,0x61,0x6e,0x67,0x65,0x20,0x61,0x75,
0x64,0x69,0x6f,0x20,0x6f,0x75,0x74,0x20,0x70,0x69,0x74,0x63,0x68,0x2e,0x3c,
0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x3c,0x2f,0x64,0x69,0x76,0x3e,
0x0d,0x0a,0x09,0x09,0x09,0x09,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,
0x73,0x3d,0x22,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x22,0x3e,0x0d,0x0a,0x09,
0x09,0x09,0x09,0x09,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,
0x22,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x22,0x3e,0x0d,0x0a,0x09,0x09,0x09,
0x09,0x09,0x09,0x3c,0x62,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6c,0x61,
0x62,0x65,0x6c,0x22,0x3e,0x46,0x72,0x65,0x65,0x52,0x54,0x4f,0x53,0x20,0x75,
0x70,0x74,0x69,0x6d,0x65,0x3a,0x3c,0x2f,0x62,0x3e,0x3c,0x73,0x70,0x61,0x6e,
0x20,0x69,0x64,0x3d,0x22,0x75,0x70,0x74,0x69,0x6d,0x65,0x22,0x20,0x63,0x6c,
0x61,0x73,0x73,0x3d,0x22,0x62,0x6f,0x78,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,
0x70,0x61,0x6e,0x3e,0x3c,0x62,0x72,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,
0x09,0x3c,0x62,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6c,0x61,0x62,0x65,
0x6c,0x22,0x3e,0x54,0x65,0x6d,0x70,0x65,0x72,0x61,0x74,0x75,0x72,0x65,0x20,
0x73,0x65,0x6e,0x73,0x6f,0x72,0x3a,0x3c,0x2f,0x62,0x3e,0x3c,0x73,0x70,0x61,
0x6e,0x20,0x69,0x64,0x3d,0x22,0x74,0x65,0x6d,0x70,0x65,0x72,0x61,0x74,0x75,
0x72,0x65,0x22,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x62,0x6f,0x78,0x22,
0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x62,0x72,0x2f,0x3e,
0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,
0x09,0x09,0x09,0x09,0x09,0x3c,0x64,0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,
0x3d,0x22,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x22,0x3e,0x0d,0x0a,0x09,0x09,
0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x4c,0x65,0x64,0x20,0x73,0x74,0x61,0x74,
0x75,0x73,0x3a,0x3c,0x2f,0x62,0x3e,0x3c,0x62,0x72,0x2f,0x3e,0x0d,0x0a,0x09,
0x09,0x09,0x09,0x09,0x09,0x3c,0x73,0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,
0x6c,0x65,0x64,0x2d,0x30,0x22,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x30,0x22,
0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6c,0x65,0x64,0x20,0x6c,0x65,0x64,
0x2d,0x6f,0x66,0x66,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,
0x3c,0x73,0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x6c,0x65,0x64,0x2d,0x31,
0x22,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x31,0x22,0x20,0x63,0x6c,0x61,0x73,
0x73,0x3d,0x22,0x6c,0x65,0x64,0x20,0x6c,0x65,0x64,0x2d,0x6f,0x66,0x66,0x22,
0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x73,0x70,0x61,0x6e,
0x20,0x69,0x64,0x3d,0x22,0x6c,0x65,0x64,0x2d,0x32,0x22,0x20,0x6e,0x61,0x6d,
0x65,0x3d,0x22,0x32,0x22,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x6c,0x65,
0x64,0x20,0x6c,0x65,0x64,0x2d,0x6f,0x66,0x66,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,
0x73,0x70,0x61,0x6e,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x2f,0x64,
0x69,0x76,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x3c,0x64,0x69,0x76,0x20,
0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x22,
0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,0x50,0x6f,0x74,
0x65,0x6e,0x74,0x69,0x6f,0x6d,0x65,0x74,0x65,0x72,0x20,0x76,0x61,0x6c,0x75,
0x65,0x3a,0x3c,0x2f,0x62,0x3e,0x3c,0x62,0x72,0x2f,0x3e,0x0d,0x0a,0x09,0x09,
0x09,0x09,0x09,0x09,0x3c,0x73,0x70,0x61,0x6e,0x20,0x63,0x6c,0x61,0x73,0x73,
0x3d,0x22,0x74,0x72,0x69,0x67,0x67,0x65,0x72,0x22,0x3e,0x3c,0x73,0x70,0x61,
0x6e,0x20,0x69,0x64,0x3d,0x22,0x70,0x6f,0x74,0x65,0x6e,0x74,0x69,0x6f,0x6d,
0x65,0x74,0x65,0x72,0x22,0x3e,0x26,0x6e,0x62,0x73,0x70,0x3b,0x3c,0x2f,0x73,
0x70,0x61,0x6e,0x3e,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x26,0x6e,0x62,0x73,
0x70,0x3b,0x3c,0x73,0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x70,0x6f,0x74,
0x65,0x6e,0x74,0x69,0x6f,0x6d,0x65,0x74,0x65,0x72,0x2d,0x76,0x61,0x6c,0x75,
0x65,0x22,0x3e,0x2d,0x2d,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x0d,0x0a,0x09,
0x09,0x09,0x09,0x09,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x09,0x09,0x09,
0x09,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x3c,0x64,
0x69,0x76,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x63,0x6f,0x6e,0x74,0x65,
0x6e,0x74,0x22,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x3c,0x62,0x3e,
0x46,0x46,0x54,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x73,0x69,0x67,0x6e,0x61,
0x6c,0x20,0x6d,0x61,0x67,0x6e,0x69,0x74,0x75,0x64,0x65,0x3a,0x3c,0x2f,0x62,
0x3e,0x3c,0x62,0x72,0x2f,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x09,0x09,0x3c,
0x64,0x69,0x76,0x20,0x69,0x64,0x3d,0x22,0x6d,0x61,0x67,0x6e,0x69,0x74,0x75,
0x64,0x65,0x2d,0x70,0x6c,0x6f,0x74,0x22,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,
0x22,0x6d,0x61,0x67,0x6e,0x69,0x74,0x75,0x64,0x65,0x2d,0x70,0x6c,0x6f,0x74,
0x22,0x3e,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x3c,
0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x09,0x09,0x09,0x09,0x3c,0x64,0x69,0x76,
0x20,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x63,0x6f,0x6e,0x74,0x65,0x6e,
0x74,0x20,0x66,0x6f,0x6f,0x74,0x65,0x72,0x22,0x3e,0x0d,0x0a,0x09,0x09,0x09,
0x09,0x09,0x09,0x50,0x6c,0x65,0x61,0x73,0x65,0x20,0x76,0x69,0x73,0x69,0x74,
0x20,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,
0x2f,0x2f,0x77,0x77,0x77,0x2e,0x61,0x74,0x6d,0x65,0x6c,0x2e,0x63,0x6f,0x6d,
0x22,0x3e,0x77,0x77,0x77,0x2e,0x61,0x74,0x6d,0x65,0x6c,0x2e,0x63,0x6f,0x6d,
0x3c,0x2f,0x61,0x3e,0x20,0x66,0x6f,0x72,0x20,0x6d,0x6f,0x72,0x65,0x20,0x69,
0x6e,0x66,0x6f,0x0d,0x0a,0x09,0x09,0x09,0x09,0x3c,0x2f,0x64,0x69,0x76,0x3e,
0x0d,0x0a,0x09,0x09,0x09,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x09,0x09,
0x3c,0x2f,0x64,0x69,0x76,0x3e,0x0d,0x0a,0x0d,0x0a,0x09,0x3c,0x2f,0x62,0x6f,
0x64,0x79,0x3e,0x0d,0x0a,0x3c,0x2f,0x68,0x74,0x6d,0x6c,0x3e,0x0d,0x0a
};
#endif /* __INDEX_HTML_H__ */
