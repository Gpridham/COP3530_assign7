#include"my.h"



/*
	Currently not using the stacksize or maxver
	stacksize = size of stack
	maxver = number of unique vertices 
*/

void dfs(GRAPH* g)
{
	
	STACK* s = (STACK*)malloc(sizeof(STACK)) ;
	initStack(s, 25); // stack size in struct is 25
	VERTEX* visitOrder[25] = {0};
	int visitNum = 0;
	
	VERTEX* firstV = g->v;
	firstV->isVisited = 1;
	push(s, firstV);
	visitOrder[visitNum++] = firstV;
	
	visitAdjVer( s, firstV, visitOrder, &visitNum);
	
	while( !isEmpty(s) )
	{

		VERTEX* next = checkOtherChild( peek(s) );
		if( next == NULL)
			pop(s);
		else
		{
			next->isVisited = 1;
			push(s, next);
			visitOrder[visitNum++] = next;
			visitAdjVer( s, next, visitOrder, &visitNum);
		}
			
	}
	
	
	int index = 0;
	printf("\nDFS visit order: \n");
	while( visitOrder[index] != NULL)
		printf("%c ", visitOrder[index++]->c);
	printf("\n");
	//printf("\nCUrrent visitNum = %d", visitNum);
	
	
} // end of dfs






