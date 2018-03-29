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
int __fdL(char *str[], char t[]){
	int x;
	for (x = 0; str[x] != "\0" && !cmp(str[x], t); x++);
	if (str[x] == "\0")return -1;
	return x;
}
int __aToM(const char *s){
	int x = 0;
	int sum = 0;
	char t[3];
	for (;*(s+x) != '\0'; x++){
		if(toLower(*(s+x))== 'k'&& toLower(*(s+(x+1))) == 'h'){
			t[0] = 'k';
			t[1] = 'h';
			t[2] = '\0';
			x++;			
		}
		else if(*(s+x) == ' '){
			sum+=2;
			continue;
		}
		else {
			t[0] = toLower(*(s+x));
			t[1] = '\0';
		}
		int line = __fdL(lchr, t);
		
		if(line == -1)sum++;
		else 
			sum += (strlen(lmorse[line])+1);
	}
	//printf("%i",sum);
	return sum;
}

void ccat(char s[], char t[], int sp, int *p){
	if(s[sp] == '\0')return;
	else {
		t[*p] = s[sp];
		*p = *p + 1;
		sp++;
		ccat(s, t, sp, p );
	}
}
int cm(int a, int b){return a==b;}
int _____alloc_memToStr(const char *s){
	int idx, strp = 0;
	int count;
	char tmp;
	for(idx = count = 0; *s != '\0'; s++){
		
		if (*s == ' '){
			tmp = *(s+1);
			/*if (tmp == '\0')
			    if(idx != 0) {
			    	count++;
			    	break;
			    }
			else*/ 
			
			if(tmp == ' '){
				count++;
				s++;
			}
			if (strp == 4)strp=0;
			else if(idx != 0)count++;
			idx = 0;
		}
		else if(*s == '-'){
			strp++;
			idx++;
			tmp = *(s+1);
			if (tmp == '\0' || tmp == ' '){
				if (strp == 4) count+=2;
				else if (tmp == '\0' ) count++;
			}
			
		}
		else if (*s == '.'){
			tmp = *(s+1);
			idx++;
			strp= 0;
			if (tmp == '\0') count++;
			
		}
	}
	return count;
}

int len(const char s[]){
	int m = 0;
	while (s[m++] != '\0');
	return --m;
}
/*
char *ToStr(const char *s){
	
}*/
void toMorse(char var_to_morse[], const char str[]);
int length_tomorse(const char str[]);
void toStr(char var_to_str[], const char str_morse[]);
int length_tostr(const char morse[]);