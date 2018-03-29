/*
	*	PrimitiveData.h
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
typedef struct __pm_method__{
	void * (*openf) (const char *, const char *);
	void (*closef) (void *);
	int (*getErrors) (void *);
	size_t (*findPos) (void *, const char *, void *);
	size_t (*getArrLength) (void *, const char *);
	void (*addElem) (void *, const char *, int, void *);
	void (*deleteElem) (void *, const char *);
	void * (*getElem) (void *, const char *);
	void (*setElem) (void *, const char *, void *);
	void (*addArr) (void *, const char *, int, void *, size_t);
	void * (*getAllContentInArr) (void *, const char *);
	void * (*getContentArrAtPos) (void *, const char *, size_t);
	void (*appendArr) (void *, const char *, void *, size_t);
	void (*setArr) (void *, const char *, void *, size_t);
	void (*setDataAtPosArr) (void *, const char *, int, void *, size_t);
	int (*getTPElem) (void *, const char *);
	int (*getIDElem) (void *, const char *);
	void (*addStrArr) (void *, const char *, const char **, size_t);
	char * (*getStrAtPos) (void *, const char *, size_t);
	char ** (*getStrArr) (void *, const char *);
	void (*appendStrArr) (void *, const char *, const char **, size_t);
	void (*setStrArr) (void *, const char *, const char **, size_t);
	void (*setStrArrAtPos) (void *, const char *, const char *, size_t);
	char * (*readStringPoint) (void *, const char *);
	void (*resetPoint) (void *);
	int (*isElemExists) (void *, const char *);
	char * (*readNameElem) (void *);
}mpdata;

mpdata *load_mpdata(void *lib_handle)
{
	mpdata *_op = (mpdata *) malloc(sizeof(struct __pm_method__));
	// load all method targets with dlsym...
	_op -> openf 	 = 	dlsym(lib_handle, "openf");
	_op -> closef 	 = 	dlsym(lib_handle, "closef");
	_op -> getErrors 	 = 	dlsym(lib_handle, "getErrors");
	_op -> findPos 	 = 	dlsym(lib_handle, "findPos");
	_op -> getArrLength 	 = 	dlsym(lib_handle, "getArrLength");
	_op -> addElem 	 = 	dlsym(lib_handle, "addElem");
	_op -> deleteElem 	 = 	dlsym(lib_handle, "deleteElem");
	_op -> getElem 	 = 	dlsym(lib_handle, "getElem");
	_op -> setElem 	 = 	dlsym(lib_handle, "setElem");
	_op -> addArr 	 = 	dlsym(lib_handle, "addArr");
	_op -> getAllContentInArr 	 = 	dlsym(lib_handle, "getAllContentInArr");
	_op -> getContentArrAtPos 	 = 	dlsym(lib_handle, "getContentArrAtPos");
	_op -> appendArr 	 = 	dlsym(lib_handle, "appendArr");
	_op -> setArr 	 = 	dlsym(lib_handle, "setArr");
	_op -> setDataAtPosArr 	 = 	dlsym(lib_handle, "setDataAtPosArr");
	_op -> getTPElem 	 = 	dlsym(lib_handle, "getTPElem");
	_op -> getIDElem 	 = 	dlsym(lib_handle, "getIDElem");
	_op -> addStrArr 	 = 	dlsym(lib_handle, "addStrArr");
	_op -> getStrAtPos 	 = 	dlsym(lib_handle, "getStrAtPos");
	_op -> getStrArr 	 = 	dlsym(lib_handle, "getStrArr");
	_op -> appendStrArr 	 = 	dlsym(lib_handle, "appendStrArr");
	_op -> setStrArr 	 = 	dlsym(lib_handle, "setStrArr");
	_op -> setStrArrAtPos 	 = 	dlsym(lib_handle, "setStrArrAtPos");
	_op -> readStringPoint 	 = 	dlsym(lib_handle, "readStringPoint");
	_op -> resetPoint 	 = 	dlsym(lib_handle, "resetPoint");
	_op -> isElemExists 	 = 	dlsym(lib_handle, "isElemExists");
	_op -> readNameElem 	 = 	dlsym(lib_handle, "readNameElem");
	return _op;
}

void release_mpdata(mpdata *__loaded)
{
	free(__loaded);
}