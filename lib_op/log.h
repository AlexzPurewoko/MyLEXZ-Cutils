/*
	*	log.h
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
typedef struct __log_method__{
	void * (*openl) (char [], char []);
	void (*setProccess) (void *, const char *);
	void (*writeLog) (void *, struct __logs* data);
	void (*writeL) (void *, int, char *, char *, ...);
	int (*logError) (void *);
	void * (*readL) (void *);
	void (*readS) (void *, char []);
	void * (*read_withPrio) (void *, int);
	void (*readS_withPrio) (void *, int, char []);
	void (*reset) (void *);
	void (*closel) (void *);
	size_t (*countLogs) (void *);
	void (*clearLogs) (void *);
}mlog;

mlog *load_mlog(void *lib_handle)
{
	mlog *_op = (mlog *) malloc(sizeof(struct __log_method__));
	// load all method targets with dlsym...
	_op -> openl 	 = 	dlsym(lib_handle, "openl");
	_op -> setProccess 	 = 	dlsym(lib_handle, "setProccess");
	_op -> writeLog 	 = 	dlsym(lib_handle, "writeLog");
	_op -> writeL 	 = 	dlsym(lib_handle, "writeL");
	_op -> logError 	 = 	dlsym(lib_handle, "logError");
	_op -> readL 	 = 	dlsym(lib_handle, "readL");
	_op -> readS 	 = 	dlsym(lib_handle, "readS");
	_op -> read_withPrio 	 = 	dlsym(lib_handle, "read_withPrio");
	_op -> readS_withPrio 	 = 	dlsym(lib_handle, "readS_withPrio");
	_op -> reset 	 = 	dlsym(lib_handle, "reset");
	_op -> closel 	 = 	dlsym(lib_handle, "closel");
	_op -> countLogs 	 = 	dlsym(lib_handle, "countLogs");
	_op -> clearLogs 	 = 	dlsym(lib_handle, "clearLogs");
	return _op;
}

void release_mlog(mlog *__loaded)
{
	free(__loaded);
}