#include"my.h"

void push(STACK* s, VERTEX* v)
{
	//printf("PUSHING in push %C\n", v->c);
	s->top++;
	s->v[s->top] = *v;
}