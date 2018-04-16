/*
	*	memory_array.h
	*	THIS FILE IS MACHINE GENERATED!!!, DO NOT MODIFY THIS FILE OR YOU HAVE EXPERIENCED ANY PROBLEM!!!
	*	@AUTHOR : Alexzander Purwoko Widiantoro
	*	Build Time : Thursday, April 16 2018, on 15:57:16
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
typedef struct __memory_arrmethods__{
	void * (*mnew) ();
	void (*mclose) (void *);
	void (*mclose_f) (void *, void (*) (void *));
	void * (*mrelease_pos) (void *, void (*) (void *), size_t);
	void (*madd_data) (void *, void *);
	void * (*mget_atpos) (void *, size_t);
	void (*mset_getiter) (void *);
	void * (*mget_iter) (void *);
	size_t (*mget_currpos) (void *);
	size_t (*mget_arrlength) (void *);
	void * (*mset_mem) (void *, size_t, void *);
	size_t (*mget_mempos) (void *, void *);
}mmem;

mmem *load_mmem(void *lib_handle)
{
	mmem *_op = (mmem *) malloc(sizeof(struct __memory_arrmethods__));
	// load all method targets with dlsym...
	_op -> mnew 	 = 	dlsym(lib_handle, "mnew");
	_op -> mclose 	 = 	dlsym(lib_handle, "mclose");
	_op -> mclose_f 	 = 	dlsym(lib_handle, "mclose_f");
	_op -> mrelease_pos 	 = 	dlsym(lib_handle, "mrelease_pos");
	_op -> madd_data 	 = 	dlsym(lib_handle, "madd_data");
	_op -> mget_atpos 	 = 	dlsym(lib_handle, "mget_atpos");
	_op -> mset_getiter 	 = 	dlsym(lib_handle, "mset_getiter");
	_op -> mget_iter 	 = 	dlsym(lib_handle, "mget_iter");
	_op -> mget_currpos 	 = 	dlsym(lib_handle, "mget_currpos");
	_op -> mget_arrlength 	 = 	dlsym(lib_handle, "mget_arrlength");
	_op -> mset_mem 	 = 	dlsym(lib_handle, "mset_mem");
	_op -> mget_mempos 	 = 	dlsym(lib_handle, "mget_mempos");
	return _op;
}

void release_mmem(mmem *__loaded)
{
	free(__loaded);
}