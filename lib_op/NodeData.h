/*
	*	NodeData.h
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
typedef struct __ndata_methods__{
	void * (*nopen) (const char *, const char *);
	int (*nclose) (void *);
	void (*nadd_node) (void *, const char *, const char *);
	void (*ndel_node) (void *, const char *);
	void (*nclear_body) (void *, const char *);
	char ** (*nlist_body) (void *, const char *);
	void (*nadd_data) (void *, const char *, const char *, const short, void *, short);
	void * (*nget_data) (void *, const char *);
	void (*ndel_data) (void *, const char *);
	void (*nset_data) (void *, const char *, void *);
	void (*nstrcat_iter) (void *, const char *);
	void (*nnext_catc) (void *, const char);
	void (*nnext_cats) (void *, const char *);
	void (*nempty_data) (void *, const char *);
	short (*nis_empty) (void *, const char *);
	short (*nget_error) (void *);
	void (*nsetAF) (void *, short);
	short (*nisAF) (void *);
	void (*nadd_arr) (void *, const char *, const char *, short, void *, size_t, short);
	void * (*nget_arr) (void *, const char *);
	size_t (*nget_occur) (void *, const char *, void *);
	void * (*nget_ap) (void *, const char *, int, int);
	int (*nget_arrlen) (void *, const char *);
	void (*nset_arr) (void *, const char *, void *, int);
	void (*nset_ap) (void *, const char *, void *, int, int, int);
	void (*nappend_arr) (void *, const char *, void *, int);
	char * (*ndisplay_error) (void *);
	void (*nempty_arr) (void *, const char *);
	void (*ndel_ap) (void *, const char *, int, int);
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
	short (*nget_td) (void *, const char *);
	short (*nis_exists) (void *, const char *);
}mndata;

mndata *load_mndata(void *lib_handle)
{
	mndata *_op = (mndata *) malloc(sizeof(struct __ndata_methods__));
	// load all method targets with dlsym...
	_op -> nopen 	 = 	dlsym(lib_handle, "nopen");
	_op -> nclose 	 = 	dlsym(lib_handle, "nclose");
	_op -> nadd_node 	 = 	dlsym(lib_handle, "nadd_node");
	_op -> ndel_node 	 = 	dlsym(lib_handle, "ndel_node");
	_op -> nclear_body 	 = 	dlsym(lib_handle, "nclear_body");
	_op -> nlist_body 	 = 	dlsym(lib_handle, "nlist_body");
	_op -> nadd_data 	 = 	dlsym(lib_handle, "nadd_data");
	_op -> nget_data 	 = 	dlsym(lib_handle, "nget_data");
	_op -> ndel_data 	 = 	dlsym(lib_handle, "ndel_data");
	_op -> nset_data 	 = 	dlsym(lib_handle, "nset_data");
	_op -> nstrcat_iter 	 = 	dlsym(lib_handle, "nstrcat_iter");
	_op -> nnext_catc 	 = 	dlsym(lib_handle, "nnext_catc");
	_op -> nnext_cats 	 = 	dlsym(lib_handle, "nnext_cats");
	_op -> nempty_data 	 = 	dlsym(lib_handle, "nempty_data");
	_op -> nis_empty 	 = 	dlsym(lib_handle, "nis_empty");
	_op -> nget_error 	 = 	dlsym(lib_handle, "nget_error");
	_op -> nsetAF 	 = 	dlsym(lib_handle, "nsetAF");
	_op -> nisAF 	 = 	dlsym(lib_handle, "nisAF");
	_op -> nadd_arr 	 = 	dlsym(lib_handle, "nadd_arr");
	_op -> nget_arr 	 = 	dlsym(lib_handle, "nget_arr");
	_op -> nget_occur 	 = 	dlsym(lib_handle, "nget_occur");
	_op -> nget_ap 	 = 	dlsym(lib_handle, "nget_ap");
	_op -> nget_arrlen 	 = 	dlsym(lib_handle, "nget_arrlen");
	_op -> nset_arr 	 = 	dlsym(lib_handle, "nset_arr");
	_op -> nset_ap 	 = 	dlsym(lib_handle, "nset_ap");
	_op -> nappend_arr 	 = 	dlsym(lib_handle, "nappend_arr");
	_op -> ndisplay_error 	 = 	dlsym(lib_handle, "ndisplay_error");
	_op -> nempty_arr 	 = 	dlsym(lib_handle, "nempty_arr");
	_op -> ndel_ap 	 = 	dlsym(lib_handle, "ndel_ap");
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
	_op -> nget_td 	 = 	dlsym(lib_handle, "nget_td");
	_op -> nis_exists 	 = 	dlsym(lib_handle, "nis_exists");
	return _op;
}

void release_mndata(mndata *__loaded)
{
	free(__loaded);
}