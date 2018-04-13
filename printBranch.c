#include"my.h"

/*
	Temporary function to print the branch
	Example:
		A -> B -> C
		B -> C
		
		if v = A
		prints out: A -> B -> C
*/
void printBranch(VERTEX* v)
{
	VERTEX* current = v;
	EDGE* next;
	printf("%c ", current->c);
	
	if(current->p != NULL)
		next = current->p;
	while( next != NULL)
	{
		printf(" -> %c ", next->v->c);
		
		next = next->q;
	}
	
	printf("\n");
}
