/*
	*	ndata.h
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
typedef struct __ndata_methods__{
	void * (*nopen) (const char *, const char *);
	int (*nclose) (void *);
	void (*addNode) (void *, const char *, const char *);
	void (*delNode) (void *, const char *);
	void (*clearContents) (void *, const char *);
	char ** (*listContents) (void *, const char *);
	void (*naddElem) (void *, const char *, const char *, const short, void *, short);
	void * (*ngetElem) (void *, const char *);
	void (*ndelElem) (void *, const char *);
	void (*nsetElem) (void *, const char *, void *);
	void (*nstrcat_iter) (void *, const char *);
	void (*nnext_catc) (void *, const char);
	void (*nnext_cats) (void *, const char *);
	void (*nempty_el) (void *, const char *);
	short (*nis_empty) (void *, const char *);
	short (*ngetErrors) (void *);
	void (*nsetAF) (void *, short);
	short (*nisAF) (void *);
	void (*naddArray) (void *, const char *, const char *, short, void *, size_t, short);
	void * (*ngetArray) (void *, const char *);
	void * (*ngetArrayAtPos) (void *, const char *, int, int);
	int (*ngetArrLength) (void *, const char *);
	void (*nsetArray) (void *, const char *, void *, int);
	void (*nsetArrayAtPos) (void *, const char *, void *, int, int, int);
	void (*nappendArray) (void *, const char *, void *, int);
	char * (*ndisplayErr) (void *);
	void (*nempty_arr) (void *, const char *);
	void (*ndelAtPos) (void *, const char *, int, int);
	void (*nreadarr_iter) (void *, const char *);
	void * (*nnext_read) (void *);
	void (*nfinish_read) (void *);
	void (*nappendarr_iter) (void *, const char *);
	void (*nnext_appendarr) (void *, void *);
	void (*naddnode_iter) (void *, const char *);
	void (*nnext_addnode) (void *, const char *);
	void (*naddarr_iter) (void *, const char *, const char *, short, short);
	void (*nnext_addarr) (void *, void *);
	void (*nsave) (void *);
	short (*nisLocked) (void *);
	short (*ngetTPElem) (void *, const char *);
	short (*nis_exists) (void *, const char *);
}mndata;

mndata *load_mndata(void *lib_handle)
{
	mndata *_op = (mndata *) malloc(sizeof(struct __ndata_methods__));
	// load all method targets with dlsym...
	_op -> nopen 	 = 	dlsym(lib_handle, "nopen");
	_op -> nclose 	 = 	dlsym(lib_handle, "nclose");
	_op -> addNode 	 = 	dlsym(lib_handle, "addNode");
	_op -> delNode 	 = 	dlsym(lib_handle, "delNode");
	_op -> clearContents 	 = 	dlsym(lib_handle, "clearContents");
	_op -> listContents 	 = 	dlsym(lib_handle, "listContents");
	_op -> naddElem 	 = 	dlsym(lib_handle, "naddElem");
	_op -> ngetElem 	 = 	dlsym(lib_handle, "ngetElem");
	_op -> ndelElem 	 = 	dlsym(lib_handle, "ndelElem");
	_op -> nsetElem 	 = 	dlsym(lib_handle, "nsetElem");
	_op -> nstrcat_iter 	 = 	dlsym(lib_handle, "nstrcat_iter");
	_op -> nnext_catc 	 = 	dlsym(lib_handle, "nnext_catc");
	_op -> nnext_cats 	 = 	dlsym(lib_handle, "nnext_cats");
	_op -> nempty_el 	 = 	dlsym(lib_handle, "nempty_el");
	_op -> nis_empty 	 = 	dlsym(lib_handle, "nis_empty");
	_op -> ngetErrors 	 = 	dlsym(lib_handle, "ngetErrors");
	_op -> nsetAF 	 = 	dlsym(lib_handle, "nsetAF");
	_op -> nisAF 	 = 	dlsym(lib_handle, "nisAF");
	_op -> naddArray 	 = 	dlsym(lib_handle, "naddArray");
	_op -> ngetArray 	 = 	dlsym(lib_handle, "ngetArray");
	_op -> ngetArrayAtPos 	 = 	dlsym(lib_handle, "ngetArrayAtPos");
	_op -> ngetArrLength 	 = 	dlsym(lib_handle, "ngetArrLength");
	_op -> nsetArray 	 = 	dlsym(lib_handle, "nsetArray");
	_op -> nsetArrayAtPos 	 = 	dlsym(lib_handle, "nsetArrayAtPos");
	_op -> nappendArray 	 = 	dlsym(lib_handle, "nappendArray");
	_op -> ndisplayErr 	 = 	dlsym(lib_handle, "ndisplayErr");
	_op -> nempty_arr 	 = 	dlsym(lib_handle, "nempty_arr");
	_op -> ndelAtPos 	 = 	dlsym(lib_handle, "ndelAtPos");
	_op -> nreadarr_iter 	 = 	dlsym(lib_handle, "nreadarr_iter");
	_op -> nnext_read 	 = 	dlsym(lib_handle, "nnext_read");
	_op -> nfinish_read 	 = 	dlsym(lib_handle, "nfinish_read");
	_op -> nappendarr_iter 	 = 	dlsym(lib_handle, "nappendarr_iter");
	_op -> nnext_appendarr 	 = 	dlsym(lib_handle, "nnext_appendarr");
	_op -> naddnode_iter 	 = 	dlsym(lib_handle, "naddnode_iter");
	_op -> nnext_addnode 	 = 	dlsym(lib_handle, "nnext_addnode");
	_op -> naddarr_iter 	 = 	dlsym(lib_handle, "naddarr_iter");
	_op -> nnext_addarr 	 = 	dlsym(lib_handle, "nnext_addarr");
	_op -> nsave 	 = 	dlsym(lib_handle, "nsave");
	_op -> nisLocked 	 = 	dlsym(lib_handle, "nisLocked");
	_op -> ngetTPElem 	 = 	dlsym(lib_handle, "ngetTPElem");
	_op -> nis_exists 	 = 	dlsym(lib_handle, "nis_exists");
	return _op;
}

void release_mndata(mndata *__loaded)
{
	free(__loaded);
}