#ifndef __MY_CO_EPOLL_H__
#define __MY_CO_EPOLL_H__
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>
#include <time.h>

#include <sys/epoll.h>

struct co_epoll_res
{
	int size;
	struct epoll_event *events;
	struct kevent *eventlist;
};
int 	co_epoll_wait( int epfd,struct co_epoll_res *events,int maxevents,int timeout );
int 	co_epoll_ctl( int epfd,int op,int fd,struct epoll_event * );
int 	co_epoll_create( int size );
struct 	co_epoll_res *co_epoll_res_alloc( int n );
void 	co_epoll_res_free( struct co_epoll_res * );


#endif