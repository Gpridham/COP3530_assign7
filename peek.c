#include"my.h"

VERTEX* peek(STACK* s)
{
	return &s->v[s->top];
}