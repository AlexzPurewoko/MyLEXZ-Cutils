#include "memory_array.h"
struct __mem_node_arr__ *__alloc_node__()
{
	return (struct __mem_node_arr__ *)malloc(sizeof(struct __mem_node_arr__));
}

struct __mem_node_arr__ *__insert_node__(struct __mem_node_arr__ *__to,
										 struct __mem_node_arr__ *__content)
{
	if (!__to)
		return __content;
	struct __mem_node_arr__ *__tmp = __to;	// saving first pointer
	while ((__to->__next_inode) != NULL)
		__to = __to->__next_inode;
	__to->__next_inode = __content;
	return __tmp;
}

void *__get_at_pos_minode__(struct __mem_node_arr__ *__source, size_t __pos)
{
	register size_t _x = 0;
	while (__source != NULL)
	{
		if (_x == __pos)
		{
			return __source->__mem_addr__;
		}
		_x++;
		__source = __source->__next_inode;
	}
	return NULL;
}

struct __mem_node_arr__ *__release_minodes__(struct __mem_node_arr__ *__source,
											 void (*__free_m__) (void *), size_t __pos)
{
	register size_t _x = 0;
	struct __mem_node_arr__ *__tmp = NULL;
	struct __mem_node_arr__ *__tmp2 = __source;
	while (__source != NULL)
	{
		if (_x == __pos)
		{
			(*__free_m__) (__source->__mem_addr__);
			__tmp = __source;
			__source = __source->__next_inode;
			// __source -> __next_inode = NULL;
			free(__tmp);
			return __tmp2;
		}
		_x++;
		__source = __source->__next_inode;
	}
}

mem_arr *mnew()
{
	mem_arr *n = malloc(sizeof(struct __arr_base__));
	n->__arr_length = n->__current_node_position = 0;
	n->__arr = n->__tmp = n->__point = NULL;
	return n;
}

void mclose(mem_arr * source)
{
	struct __mem_node_arr__ *tmp = source->__arr;
	struct __mem_node_arr__ *tmp2;
	while (tmp != NULL)
	{
		tmp2 = tmp->__next_inode;
		free(tmp);
		tmp = tmp2;
	}
	free(source);
}

void mclose_f(mem_arr * source, void (*_free_) (void *))
{
	struct __mem_node_arr__ *tmp = source->__arr;
	struct __mem_node_arr__ *tmp2;
	while (tmp != NULL)
	{
		(*_free_) (tmp->__mem_addr__);
		tmp->__mem_addr__;
		tmp2 = tmp->__next_inode;
		free(tmp);
		tmp = tmp2;
	}
	free(source);
}
mem_arr *mrelease_pos(mem_arr * source, void (*_free_) (void *), size_t _pos){
	if(!source)return NULL;
	source -> __arr = __release_minodes__(source -> __arr, _free_, _pos);
	source -> __arr_length = source -> __arr_length -1;
	return source;
}
void madd_data(mem_arr * source, void *mem)
{
	source->__tmp = __alloc_node__();
	source->__tmp->__mem_addr__ = mem;
	source->__tmp->__next_inode = NULL;
	source->__arr = __insert_node__(source->__arr, source->__tmp);
	source->__tmp = NULL;
	source->__arr_length = source->__arr_length + 1;
	source->__point = source->__arr;
}

void *mget_atpos(mem_arr * source, size_t _pos)
{
	return __get_at_pos_minode__(source->__arr, _pos);
}

void mset_getiter(mem_arr * source)
{
	source->__point = source->__arr;
	source->__current_node_position = 0;
}

void *mget_iter(mem_arr * source)
{
	if (!source)
		return NULL;
	if (!(source->__point))
		return NULL;
	void *_res = source->__point->__mem_addr__;
	source->__current_node_position = source->__current_node_position + 1;
	source->__point = source->__point->__next_inode;
	return _res;
}
size_t mget_currpos(mem_arr * source){
	if(!source)return -1;
	return source -> __current_node_position;
}
size_t mget_arrlength(mem_arr * source){
	return source -> __arr_length;
}
void *mset_mem(mem_arr * source, size_t _pos, void *__new_mem){
	void *__last = NULL;
	struct __mem_node_arr__ *tmp = source -> __arr;
	register size_t x = 0;
	while(tmp != NULL){
		if(x == _pos){
			__last = tmp -> __mem_addr__;
			tmp -> __mem_addr__ = __new_mem;
			break;
		}
		tmp = tmp -> __next_inode;
		x++;
	}
	return __last;
}
size_t mget_mempos(mem_arr *source, void *__mem){
	struct __mem_node_arr__ *tmp = source -> __arr;
	register size_t x = -1;
	while(tmp != NULL){
		x++;
		if(tmp -> __mem_addr__ == __mem)
			return x;
		tmp = tmp -> __next_inode;
	}
	return x;
}
