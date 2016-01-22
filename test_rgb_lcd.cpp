/*
 * Author: Akira Tsukamoto
 * Copyright (c) 2016 Linaro Ltd.
 * All rights reserved.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:

 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.

 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <string>
#include "upm/jhd1313m1.h"

/* Note:
	LCD_ADDRESS 0x7c>>1 62 0x3e
	RGB_ADDRESS 0xc4>>1 98 0x62
*/

#define I2C_BUS  0
#define LCD_ADDR 0x3e
#define RGB_ADDR 0x62

#define RGB_WHT 0xff,0xff,0xff
#define RGB_RED 0xff,0x00,0x00
#define RGB_GRN 0x00,0xff,0x00
#define RGB_BLU 0x00,0x00,0xff

#define DEFAULT_STRING_1 "96Boards!"
#define DEFAULT_STRING_2 "Grove sensors!"
#define DEFAULT_STRING_3 "Reference S. P.!"

#define RED_STRING "fantastic :)"
#define GRN_STRING "nice :)"
#define BLU_STRING "great :)"

#define SLEEP_TIME 2

using namespace std;

int main(int argc, char* argv[])
{
	string str1 = DEFAULT_STRING_1;
	string str2 = DEFAULT_STRING_2;
	string str3 = DEFAULT_STRING_3;
	
	upm::Jhd1313m1* lcd = new upm::Jhd1313m1(I2C_BUS, LCD_ADDR, RGB_ADDR);

	if (argc >= 2) {
   	 if (argv[1] != NULL) {
   		 str1 = argv[1];
   	 }
   	 if ((argc >= 3) && (argv[2] != NULL)) {
   		 str2 = argv[2];
   	 }
   	 if ((argc >= 4) && (argv[3] != NULL)) {
   		 str3 = argv[3];
   	 }
	}

	while (true) {
		lcd->clear();
		lcd->setColor(RGB_RED);
		lcd->setCursor(0,0); /* first row */
		lcd->write(str1);
		lcd->setCursor(1,2); /* second row */
		lcd->write(RED_STRING);
		sleep(SLEEP_TIME);

		lcd->clear();
		lcd->setColor(RGB_GRN);
		lcd->setCursor(0,0);
		lcd->write(str2);
		lcd->setCursor(1,2);
		lcd->write(GRN_STRING);
		sleep(SLEEP_TIME);

		lcd->clear();
		lcd->setColor(RGB_BLU);
		lcd->setCursor(0,0);
		lcd->write(str3);
		lcd->setCursor(1,2);
		lcd->write(BLU_STRING);
		sleep(SLEEP_TIME);
	}

	delete lcd;

	return 0;
}

