#include"my.h"

int isEmpty(STACK* s)
{
	if(s->top == -1)
		return 1;
	else 
		return 0;
}