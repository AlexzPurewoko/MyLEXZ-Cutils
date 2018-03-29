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
 *	@(#)morse.c v1.0-Beta @@ SOURCE FILE @@
 * Last updated in : Sunday Nov, 19, 2017 in 02:00 AM
 * Time Zone : Jakarta, GMT+7 , WIB
 */
#include "morse.h"
/*
MORSE ARRAY CHARACTERS
*/
void toMorse(char tmp[], const char *s){
	char t[3];
	int cnt = 0;
	for (int x = 0; s[x]  != '\0'; x++){
		if(cm(toLower(s[x]), 'k')&& cm(toLower(s[x+1]),'h')){
			printf("%i",1);
			t[0] = 'k';
			t[1] = 'h';
			t[2] = '\0';
			x++;			
		}
		else if(s[x] == ' '){
			ccat("  ", tmp, 0, &cnt);
			continue;
		}
		else {
			t[0] = toLower(s[x]);
			t[1] = '\0';
		}
		int line = __fdL(lchr, t);
		
		if(line == -1)ccat(t, tmp, 0, &cnt);
		else {
			ccat(" ", tmp, 0, &cnt);
			ccat(  lmorse[line],  tmp, 0, &cnt);
		}
	}
	tmp[cnt] = '\0';
	//printf("%s",tmp);
	//printf("%s\n", b);
	
}
void toStr(char tmp[], const char *s){
	char t[6];
	int x, y, cnt;
	for (x = y = cnt = 0; s[x] != '\0'; x++){
		/*
		
		*/
		if (s[x] == '.' || s[x] == '-'){
		    t[y++] = s[x];
		    if(s[x+1] == '\0'){
		    	t[y] = '\0';
			    int line = __fdL(lmorse,t);
		    	ccat(lchr[line], tmp, 0, &cnt);
		    	y = 0;
		    }
		}
		else if(s[x] == ' '){
			t[y] = '\0';
			int line = __fdL(lmorse,t);
			ccat(lchr[line], tmp, 0, &cnt);
			y = 0;
            if((x+1) == '\0')break;
            else /*if(!((x+1)==idx))*/{
                if(s[++x] ==' ')ccat(" ", tmp, 0, &cnt);
                else{
                    x--;
                    continue;}
                    }
            }
            else tmp[cnt++] = s[x];
	}
	tmp[cnt] = '\0';
}
int length_tomorse(const char str[]){
	return __aToM(str);
}
int length_tostr(const char morse[]){
	return _____alloc_memToStr(morse);
}
