#ifndef __MY_CO_CTX_H__
#define __MY_CO_CTX_H__
#include <stdlib.h>
typedef void* (*coctx_pfn_t)( void* s, void* s2 );
struct coctx_param_t
{
	const void *s1;
	const void *s2;
};
struct coctx_t
{

	void *regs[ 14 ];
	size_t ss_size;
	char *ss_sp;
	
};

int coctx_init( coctx_t *ctx );
int coctx_make( coctx_t *ctx,coctx_pfn_t pfn,const void *s,const void *s1 );
#endif