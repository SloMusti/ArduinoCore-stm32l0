/*
 * Copyright (c) 2017-2018 Thomas Roell.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal with the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimers.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimers in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of Thomas Roell, nor the names of its contributors
 *     may be used to endorse or promote products derived from this Software
 *     without specific prior written permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * WITH THE SOFTWARE.
 */

#ifndef _VARIANT_MURATA_ABZ_STM32L072CZ_
#define _VARIANT_MURATA_ABZ_STM32L072CZ_

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/

#define STM32L0_CONFIG_LSECLK             32768
#define STM32L0_CONFIG_HSECLK             0
#define STM32L0_CONFIG_SYSOPT             0

/** Master clock frequency */
#define VARIANT_MCK                       F_CPU

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
#include "Uart.h"
#endif // __cplusplus

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

// Number of pins defined in PinDescription array
#define PINS_COUNT           (50u)
#define NUM_DIGITAL_PINS     (50)
#define NUM_ANALOG_INPUTS    (5u)
#define NUM_ANALOG_OUTPUTS   (1u)

// Named pins

#define PIN_PA0              (33ul)
//#define PIN_PA1              (ul)
#define PIN_PA2              (24ul)
#define PIN_PA3              (23ul)
#define PIN_PA4              (22ul)
#define PIN_PA5              (21ul)
//#define PIN_PA6              (ul)
//#define PIN_PA7              (ul)
#define PIN_PA8              (20ul)
#define PIN_PA9              (19ul)
#define PIN_PA10             (18ul)
#define PIN_PA11             (2ul)
#define PIN_PA12             (1ul)
#define PIN_PA13             (41ul)
#define PIN_PA14             (42ul)
//#define PIN_PA15             (ul)

//#define PIN_PB0              (ul)
//#define PIN_PB1              (ul)
#define PIN_PB2              (37ul)
//#define PIN_PB3              (ul)
//#define PIN_PB4              (ul)
#define PIN_PB5              (40ul)
#define PIN_PB6              (39ul)
#define PIN_PB7              (38ul)
#define PIN_PB8              (35ul)
#define PIN_PB9              (36ul)
//#define PIN_PB10             (ul)
//#define PIN_PB11             (ul)
#define PIN_PB12             (17ul)
#define PIN_PB13             (16ul)
#define PIN_PB14             (15ul)
#define PIN_PB15             (14ul)

#define PIN_PH0              (46ul)
#define PIN_PH1              (45ul)


static const uint8_t PA0  = PIN_PA0;
//static const uint8_t PA1  = PIN_PA1;
static const uint8_t PA2  = PIN_PA2;
static const uint8_t PA3  = PIN_PA3;
static const uint8_t PA4  = PIN_PA4;
static const uint8_t PA5  = PIN_PA5;
//static const uint8_t PA6  = PIN_PA6;
//static const uint8_t PA7  = PIN_PA7;
static const uint8_t PA8  = PIN_PA8;
static const uint8_t PA9  = PIN_PA9;
static const uint8_t PA10  = PIN_PA10;
static const uint8_t PA11  = PIN_PA11;
static const uint8_t PA12  = PIN_PA12;
//static const uint8_t PA15  = PIN_PA15;

//static const uint8_t PB0  = PIN_PB0;
//static const uint8_t PB1  = PIN_PB1;
static const uint8_t PB2  = PIN_PB2;
//static const uint8_t PB3  = PIN_PB3;
//static const uint8_t PB4  = PIN_PB4;
static const uint8_t PB5  = PIN_PB5;
static const uint8_t PB6  = PIN_PB6;
static const uint8_t PB7  = PIN_PB7;
static const uint8_t PB8  = PIN_PB8;
static const uint8_t PB9  = PIN_PB9;
//static const uint8_t PB10  = PIN_PB10;
//static const uint8_t PB12  = PIN_PB12;
static const uint8_t PB13  = PIN_PB13;
static const uint8_t PB14  = PIN_PB14;
static const uint8_t PB15  = PIN_PB15;

static const uint8_t PH0  = PIN_PH0;
static const uint8_t PH1  = PIN_PH1;

/*
 * Analog pins
 */

static const uint8_t A0  = PIN_PA0;
//static const uint8_t A1  = PIN_A1;
static const uint8_t A2  = PIN_PA2;
static const uint8_t A3  = PIN_PA3;
static const uint8_t A4  = PIN_PA4;
static const uint8_t A5  = PIN_PA5;

#define ADC_RESOLUTION          12

/*
 * Serial interfaces
 */

#define SERIAL_INTERFACES_COUNT 2

#define PIN_SERIAL_RX        (23ul)
#define PIN_SERIAL_TX        (24ul)

#define PIN_SERIAL1_RX       (18ul)
#define PIN_SERIAL1_TX       (19ul)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (15u)
#define PIN_SPI_MOSI         (14u)
#define PIN_SPI_SCK          (16u)

static const uint8_t SS   = 17;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (36u)
#define PIN_WIRE_SCL         (35u)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;


#define PWM_INSTANCE_COUNT    1

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
extern Uart Serial;
extern Uart Serial1;
#endif

// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR         Serial
#define SERIAL_PORT_HARDWARE1       Serial
#define SERIAL_PORT_HARDWARE2       Serial1
#define SERIAL_PORT_HARDWARE_OPEN2  Serial1

#endif /*_VARIANT_MURATA_ABZ_STM32L072CZ_ */

