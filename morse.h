/*
 * Copyright (C) 2017 Alexzander Purwoko Widiantoro
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)morse.h	v1.0-Beta @@ HEADER FILE @@
 * Last updated in : Sunday Nov, 19, 2017 in 02:00 AM
 * Time Zone : Jakarta, GMT+7 , WIB
 */
#include "component.h"
 /*
DO NOT MODIFY THIS FILE!!!
EXCEPT YOU AS AUTHOR OF THIS FILE


*/
/*
MORSE ARRAY CHARACTERS
*/
static char *lmorse[] = {
	/* EISH */
	".", "..", "...", "....",
	/* TMO KH */
	"-", "--", "---", "----",
	/* KX RP*/
	"-.-", "-..-", ".-.", ".--.",
	/*AUV NDB*/
	".-", "..-", "...-", "-.", "-..", "-...",
	/*WFY GLQ*/
	".--", "..-.", "-.--",  "--.", ".-.."
	, "--.-",
	/* CJZ */
	"-.-.", ".---", "--..",
	/* NUMBER CODES */
	/* 1234567890*/
	".----", "..---", "...--", "....-", ".....", 
	"-....", "--...", "---..", "----.", "-----",
	"\0"
};
/*
ARRAY OF ALL CHARACTERS A - Z(LOWER)
*/
static char *lchr[] = {
	"e", "i", "s", "h",
	"t", "m", "o", "kh",
	"k", "x", "r", "p",
	"a", "u", "v", "n", "d", "b",
	"w","f","y","g","l","q",
	"c","j","z",
	"1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
	"\0"
};

/*
char *ToStr(const char *s){
	
}*/
void toMorse(char var_to_morse[], const char str[]);
int length_tomorse(const char str[]);
void toStr(char var_to_str[], const char str_morse[]);
int length_tostr(const char morse[]);