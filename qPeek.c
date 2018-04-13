#include"my.h"

VERTEX* qPeek(QUEUE* q)
{
	return &q->v[q->front];
}