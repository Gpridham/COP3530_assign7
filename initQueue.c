#include"my.h"

void initQueue(QUEUE* q, int size)
{
	
	q->size = 0; // empty
	q->front = 0;
	q->maxSize = size; // 25 is maxsize in struct
	q->rear = -1;

}