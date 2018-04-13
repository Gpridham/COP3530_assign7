#include"my.h"

/*
	Returns VEXRTEX* if pop success
	Returns NULL if empty stack
*/
VERTEX* pop(STACK* s)
{
	if( s->top != -1) // if not empty
	{
		return &s->v[s->top--];
	}	
	else
		return NULL;
}