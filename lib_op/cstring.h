/*
	*	cstring.h
	*	THIS FILE IS MACHINE GENERATED!!!, DO NOT MODIFY THIS FILE OR YOU HAVE EXPERIENCED ANY PROBLEM!!!
	*	@AUTHOR : Alexzander Purwoko Widiantoro
	*	Build Time : Sunday, March 24 2018, on 6:10:39
*/

/*
	* Copyright (C) 2018 by Alexzander Purwoko Widiantoro
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
*/


#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
typedef struct __cstring_method__{
	void * (*snew) ();
	void (*scat) (void *, void *);
	void (*sappend) (void *, const char *, ...);
	void (*sadd) (void *, const char);
	int (*scmp) (void *, void *);
	size_t (*slen) (void *);
	void (*sshow) (void *);
	void (*sfree) (void *);
	void (*incps) (void *);
	void (*decps) (void *);
	size_t (*sgcpp) (void *);
	void (*sresp) (void *);
	char (*sgetc) (void *);
	char (*sgetcp) (void *, size_t);
	void (*sget) (void *, char *, size_t, size_t);
	void (*ssetc) (void *, char);
	void (*ssetcp) (void *, char, size_t);
	void (*sset) (void *, const char *, size_t, size_t);
	void (*sdel) (void *, size_t);
	void (*sdelp) (void *, size_t, size_t);
	void (*sdelc) (void *, char);
	int (*smatch) (void *, const char *);
	void (*sreverse) (void *);
	void (*stoupper) (void *);
	void (*stolower) (void *);
}mcstr;

mcstr *load_mcstr(void *lib_handle)
{
	mcstr *_op = (mcstr *) malloc(sizeof(struct __cstring_method__));
	// load all method targets with dlsym...
	_op -> snew 	 = 	dlsym(lib_handle, "snew");
	_op -> scat 	 = 	dlsym(lib_handle, "scat");
	_op -> sappend 	 = 	dlsym(lib_handle, "sappend");
	_op -> sadd 	 = 	dlsym(lib_handle, "sadd");
	_op -> scmp 	 = 	dlsym(lib_handle, "scmp");
	_op -> slen 	 = 	dlsym(lib_handle, "slen");
	_op -> sshow 	 = 	dlsym(lib_handle, "sshow");
	_op -> sfree 	 = 	dlsym(lib_handle, "sfree");
	_op -> incps 	 = 	dlsym(lib_handle, "incps");
	_op -> decps 	 = 	dlsym(lib_handle, "decps");
	_op -> sgcpp 	 = 	dlsym(lib_handle, "sgcpp");
	_op -> sresp 	 = 	dlsym(lib_handle, "sresp");
	_op -> sgetc 	 = 	dlsym(lib_handle, "sgetc");
	_op -> sgetcp 	 = 	dlsym(lib_handle, "sgetcp");
	_op -> sget 	 = 	dlsym(lib_handle, "sget");
	_op -> ssetc 	 = 	dlsym(lib_handle, "ssetc");
	_op -> ssetcp 	 = 	dlsym(lib_handle, "ssetcp");
	_op -> sset 	 = 	dlsym(lib_handle, "sset");
	_op -> sdel 	 = 	dlsym(lib_handle, "sdel");
	_op -> sdelp 	 = 	dlsym(lib_handle, "sdelp");
	_op -> sdelc 	 = 	dlsym(lib_handle, "sdelc");
	_op -> smatch 	 = 	dlsym(lib_handle, "smatch");
	_op -> sreverse 	 = 	dlsym(lib_handle, "sreverse");
	_op -> stoupper 	 = 	dlsym(lib_handle, "stoupper");
	_op -> stolower 	 = 	dlsym(lib_handle, "stolower");
	return _op;
}

void release_mcstr(mcstr *__loaded)
{
	free(__loaded);
}