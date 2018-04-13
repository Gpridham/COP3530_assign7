#include"my.h"

void enque(QUEUE* q, VERTEX* v)
{
	//printf("In METHOD Enqueing %C\n", v->c);
	
    //if( q->rear == q->front)
    //printf("Queue is FULL");
    if(q->rear == q->maxSize - 1)
        q->rear = -1;
	else
	{
        //printf("Storing %c at location %d\n", v->c, q->rear);
		q->v[++(q->rear)] = *v;
        //q->rear = ++(q->rear) % q->maxSize; // if pointing to rear
		q->size++;
	}
}