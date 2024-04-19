/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  // D0 .. D7
  28,  // D0  is P0.28 A0,MISO
  43,  // D1  is P1.11 A1,MOSI
  45,  // D2  is P0.10 A2,SCK
  31,  // D3  is P0.31 A3,SS
  24,  // D4  is P0.24 SDA
  42,  // D5  is P1.10 SCL
  46,  // D6  is P1.16 TX
  3,  // D7  is P0.03 RX

  // D8 .. D10
  33, // D8 is P1.01 STAT
  9,  // D9 is P0.09 NFC1
  10,  // D10 is P0.10 NFC2

};

void initVariant()
{
  // LED1
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

