#include "../component.h"
struct __mem_node_arr__{
	void *__mem_addr__;
	struct __mem_node_arr__ *__next_inode;
};
typedef struct __arr_base__
{
	struct __mem_node_arr__ *__arr;
	struct __mem_node_arr__ *__tmp;
	struct __mem_node_arr__ *__point;
	size_t __arr_length;
	size_t __current_node_position;
} mem_arr;


mem_arr *mnew();
void mclose(mem_arr * source);
void mclose_f(mem_arr * source, void (*_free_) (void *));
mem_arr *mrelease_pos(mem_arr * source, void (*_free_) (void *), size_t _pos);
void madd_data(mem_arr * source, void *mem);
void *mget_atpos(mem_arr * source, size_t _pos);
void mset_getiter(mem_arr * source);
void *mget_iter(mem_arr * source);
size_t mget_currpos(mem_arr * source);
size_t mget_arrlength(mem_arr * source);
void *mset_mem(mem_arr * source, size_t _pos, void *__new_mem);
size_t mget_mempos(mem_arr *source, void *__mem);
