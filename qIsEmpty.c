#include"my.h"

int qIsEmpty(QUEUE* q)
{
	if(q->size == 0)
		return 1;
	else 
		return 0;
}