/*
 * fast_gpio.h
 *
 * Copyright (c) 2016 maowen (https://github.com/maowen)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef _ESP8266_FAST_GPIO_H_
#define _ESP8266_FAST_GPIO_H_

#include "eagle_soc.h"
#include "gpio.h"

/* GPIO0 Macros */
#define GPIO0_MUX       PERIPHS_IO_MUX_GPIO0_U
#define GPIO0_CONF      (PIN_FUNC_SELECT(GPIO0_MUX, FUNC_GPIO0))
#define GPIO0_OUTPUT_SET    do { GPIO0_CONF; GPIO_OUTPUT_SET(0, 0); } while(0)
#define GPIO0_INPUT_SET     do { GPIO0_CONF; GPIO_DIS_OUTPUT(0); } while(0)
#define GPIO0_INPUT_PULLUP_SET     do { GPIO0_INPUT_SET; PIN_PULLUP_EN(GPIO0_MUX); } while(0)
#define GPIO0_IN        (GPIO_INPUT_GET(BIT0))
#define GPIO0_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT0))
#define GPIO0_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT0))
#define GPIO0(x)        ((x)?GPIO0_H:GPIO0_L)

/* GPIO1 Macros */
#define GPIO1_MUX       PERIPHS_IO_MUX_U0TXD_U
#define GPIO1_CONF      PIN_FUNC_SELECT(GPIO1_MUX, FUNC_GPIO1)
#define GPIO1_OUTPUT_SET    do { GPIO1_CONF; GPIO_OUTPUT_SET(1, 0); } while(0)
#define GPIO1_INPUT_SET     do { GPIO1_CONF; GPIO_DIS_OUTPUT(1); } while(0)
#define GPIO1_INPUT_PULLUP_SET     do { GPIO1_INPUT_SET; PIN_PULLUP_EN(GPIO1_MUX); } while(0)
#define GPIO1_IN        (GPIO_INPUT_GET(BIT1))
#define GPIO1_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT1))
#define GPIO1_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT1))
#define GPIO1(x)        ((x)?GPIO1_H:GPIO1_L)

/* GPIO2 Macros */
#define GPIO2_MUX       PERIPHS_IO_MUX_GPIO2_U
#define GPIO2_CONF      PIN_FUNC_SELECT(GPIO2_MUX, FUNC_GPIO2)
#define GPIO2_OUTPUT_SET    do { GPIO2_CONF; GPIO_OUTPUT_SET(2, 0); } while(0)
#define GPIO2_INPUT_SET     do { GPIO2_CONF; GPIO_DIS_OUTPUT(2); } while(0)
#define GPIO2_INPUT_PULLUP_SET     do { GPIO2_INPUT_SET; PIN_PULLUP_EN(GPIO2_MUX); } while(0)
#define GPIO2_IN        (GPIO_INPUT_GET(BIT2))
#define GPIO2_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT2))
#define GPIO2_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT2))
#define GPIO2(x)        ((x)?GPIO2_H:GPIO2_L)

/* GPIO3 Macros */
#define GPIO3_MUX       PERIPHS_IO_MUX_U0RXD_U
#define GPIO3_CONF      PIN_FUNC_SELECT(GPIO3_MUX, FUNC_GPIO3)
#define GPIO3_OUTPUT_SET    do { GPIO3_CONF; GPIO_OUTPUT_SET(3, 0); } while(0)
#define GPIO3_INPUT_SET     do { GPIO3_CONF; GPIO_DIS_OUTPUT(3); } while(0)
#define GPIO3_INPUT_PULLUP_SET     do { GPIO3_INPUT_SET; PIN_PULLUP_EN(GPIO3_MUX); } while(0)
#define GPIO3_IN        (GPIO_INPUT_GET(BIT3))
#define GPIO3_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT3))
#define GPIO3_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT3))
#define GPIO3(x)        ((x)?GPIO3_H:GPIO3_L)

/* GPIO4 Macros */
#define GPIO4_MUX       PERIPHS_IO_MUX_GPIO4_U
#define GPIO4_CONF      PIN_FUNC_SELECT(GPIO4_MUX, FUNC_GPIO4)
#define GPIO4_OUTPUT_SET    do { GPIO4_CONF; GPIO_OUTPUT_SET(4, 0); } while(0)
#define GPIO4_INPUT_SET     do { GPIO4_CONF; GPIO_DIS_OUTPUT(4); } while(0)
#define GPIO4_INPUT_PULLUP_SET     do { GPIO4_INPUT_SET; PIN_PULLUP_EN(GPIO4_MUX); } while(0)
#define GPIO4_IN        (GPIO_INPUT_GET(BIT4))
#define GPIO4_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT4))
#define GPIO4_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT4))
#define GPIO4(x)        ((x)?GPIO4_H:GPIO4_L)

/* GPIO5 Macros */
#define GPIO5_MUX       PERIPHS_IO_MUX_GPIO5_U
#define GPIO5_CONF      PIN_FUNC_SELECT(GPIO5_MUX, FUNC_GPIO5)
#define GPIO5_OUTPUT_SET    do { GPIO5_CONF; GPIO_OUTPUT_SET(5, 0); } while(0)
#define GPIO5_INPUT_SET     do { GPIO5_CONF; GPIO_DIS_OUTPUT(5); } while(0)
#define GPIO5_INPUT_PULLUP_SET     do { GPIO5_INPUT_SET; PIN_PULLUP_EN(GPIO5_MUX); } while(0)
#define GPIO5_IN        (GPIO_INPUT_GET(BIT5))
#define GPIO5_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT5))
#define GPIO5_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT5))
#define GPIO5(x)        ((x)?GPIO5_H:GPIO5_L)

/* Pins 6-8 not configurable as for gpio

/* GPIO9 Macros */
#define GPIO9_MUX       PERIPHS_IO_MUX_SD_DATA2_U
#define GPIO9_CONF      PIN_FUNC_SELECT(GPIO9_MUX, FUNC_GPIO9)
#define GPIO9_OUTPUT_SET    do { GPIO9_CONF; GPIO_OUTPUT_SET(9, 0); } while(0)
#define GPIO9_INPUT_SET     do { GPIO9_CONF; GPIO_DIS_OUTPUT(9); } while(0)
#define GPIO9_INPUT_PULLUP_SET     do { GPIO9_INPUT_SET; PIN_PULLUP_EN(GPIO9_MUX); } while(0)
#define GPIO9_IN        (GPIO_INPUT_GET(BIT9))
#define GPIO9_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT9))
#define GPIO9_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT9))
#define GPIO9(x)        ((x)?GPIO9_H:GPIO9_L)

/* GPIO10 Macros */
#define GPIO10_MUX      PERIPHS_IO_MUX_SD_DATA3_U
#define GPIO10_CONF     PIN_FUNC_SELECT(GPIO10_MUX, FUNC_GPIO10)
#define GPIO10_OUTPUT_SET    do { GPIO10_CONF; GPIO_OUTPUT_SET(10, 0); } while(0)
#define GPIO10_INPUT_SET     do { GPIO10_CONF; GPIO_DIS_OUTPUT(10); } while(0)
#define GPIO10_INPUT_PULLUP_SET     do { GPIO10_INPUT_SET; PIN_PULLUP_EN(GPIO10_MUX); } while(0)
#define GPIO10_IN        (GPIO_INPUT_GET(BIT10))
#define GPIO10_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT10))
#define GPIO10_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT10))
#define GPIO10(x)        ((x)?GPIO10_H:GPIO10_L)

/* Pin 11 not cofigurable as gpio

/* GPIO12 Macros */
#define GPIO12_MUX      PERIPHS_IO_MUX_MTDI_U
#define GPIO12_CONF     PIN_FUNC_SELECT(GPIO12_MUX, FUNC_GPIO12)
#define GPIO12_OUTPUT_SET    do { GPIO12_CONF; GPIO_OUTPUT_SET(12, 0); } while(0)
#define GPIO12_INPUT_SET     do { GPIO12_CONF; GPIO_DIS_OUTPUT(12); } while(0)
#define GPIO12_INPUT_PULLUP_SET     do { GPIO12_INPUT_SET; PIN_PULLUP_EN(GPIO12_MUX); } while(0)
#define GPIO12_IN        (GPIO_INPUT_GET(BIT12))
#define GPIO12_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT12))
#define GPIO12_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT12))
#define GPIO12(x)        ((x)?GPIO12_H:GPIO12_L)

/* GPIO13 Macros */
#define GPIO13_MUX      PERIPHS_IO_MUX_MTCK_U
#define GPIO13_CONF     PIN_FUNC_SELECT(,GPIO13_MUX FUNC_GPIO13)
#define GPIO13_OUTPUT_SET    do { GPIO13_CONF; GPIO_OUTPUT_SET(13, 0); } while(0)
#define GPIO13_INPUT_SET     do { GPIO13_CONF; GPIO_DIS_OUTPUT(13); } while(0)
#define GPIO13_INPUT_PULLUP_SET     do { GPIO13_INPUT_SET; PIN_PULLUP_EN(GPIO13_MUX); } while(0)
#define GPIO13_IN        (GPIO_INPUT_GET(BIT13))
#define GPIO13_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT13))
#define GPIO13_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT13))
#define GPIO13(x)        ((x)?GPIO13_H:GPIO13_L)

/* GPIO14 Macros */
#define GPIO14_MUX      PERIPHS_IO_MUX_MTMS_U
#define GPIO14_CONF     PIN_FUNC_SELECT(GPIO14_MUX, FUNC_GPIO14)
#define GPIO14_OUTPUT_SET    do { GPIO14_CONF; GPIO_OUTPUT_SET(14, 0); } while(0)
#define GPIO14_INPUT_SET     do { GPIO14_CONF; GPIO_DIS_OUTPUT(14); } while(0)
#define GPIO14_INPUT_PULLUP_SET     do { GPIO14_INPUT_SET; PIN_PULLUP_EN(GPIO14_MUX); } while(0)
#define GPIO14_IN        (GPIO_INPUT_GET(BIT14))
#define GPIO14_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT14))
#define GPIO14_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT14))
#define GPIO14(x)        ((x)?GPIO14_H:GPIO14_L)

/* GPIO15 Macros */
#define GPIO15_MUX      PERIPHS_IO_MUX_MTDO_U
#define GPIO15_CONF     PIN_FUNC_SELECT(GPIO15_MUX, FUNC_GPIO15)
#define GPIO15_OUTPUT_SET    do { GPIO15_CONF; GPIO_OUTPUT_SET(15, 0); } while(0)
#define GPIO15_INPUT_SET     do { GPIO15_CONF; GPIO_DIS_OUTPUT(15); } while(0)
#define GPIO15_INPUT_PULLUP_SET     do { GPIO15_INPUT_SET; PIN_PULLUP_EN(GPIO15_MUX); } while(0)
#define GPIO15_IN        (GPIO_INPUT_GET(BIT15))
#define GPIO15_H         (GPIO_REG_WRITE(GPIO_OUT_W1TS_ADDRESS, BIT15))
#define GPIO15_L         (GPIO_REG_WRITE(GPIO_OUT_W1TC_ADDRESS, BIT15))
#define GPIO15(x)        ((x)?GPIO15_H:GPIO15_L)

/* GPIO16 Macros (no pullup enabled) */
#define GPIO16_CONF     \
do { \
    WRITE_PERI_REG(PAD_XPD_DCDC_CONF, (READ_PERI_REG(PAD_XPD_DCDC_CONF) & (uint32_t)0xffffffbd) | (uint32_t)0x1); \
    WRITE_PERI_REG(RTC_GPIO_CONF, (READ_PERI_REG(RTC_GPIO_CONF) & (uint32_t)0xfffffffe) | (uint32_t)0x0); \
} while(0)
#define GPIO16_OUTPUT_SET    \
do { \
    GPIO16_CONF;  \
    WRITE_PERI_REG(RTC_GPIO_ENABLE, (READ_PERI_REG(RTC_GPIO_ENABLE) & (uint32)0xfffffffe) | (uint32)0x1); \
} while(0)
#define GPIO16_INPUT_SET    \
do { \
    GPIO16_CONF;  \
    WRITE_PERI_REG(RTC_GPIO_ENABLE, (READ_PERI_REG(RTC_GPIO_ENABLE) & (uint32)0xfffffffe)); \
} while(0)
#define GPIO16_IN        (uint8_t)(READ_PERI_REG(RTC_GPIO_IN_DATA) & 1)
#define GPIO16_H         WRITE_PERI_REG(RTC_GPIO_OUT, (READ_PERI_REG(RTC_GPIO_OUT) & (uint32_t)0xfffffffe) | (uint32_t)(0x1));
#define GPIO16_L         WRITE_PERI_REG(RTC_GPIO_OUT, (READ_PERI_REG(RTC_GPIO_OUT) & (uint32_t)0xfffffffe) | (uint32_t)(0x0));
#define GPIO16(x)        ((x)?GPIO16_H:GPIO16_L)

#endif
