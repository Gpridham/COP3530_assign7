#include"my.h"

/*
	Returns VEXRTEX* if pop success
	Returns NULL if empty stack
*/
VERTEX* deque(QUEUE* q)
{
	VERTEX* v;
	if( q->size != 0) // if not empty
	{
		q->size--;
		v = &q->v[q->front];
        q->front++; // = q->front & q->maxSize;
		return v;
	}	
	else
		return NULL;
}