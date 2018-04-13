#include"my.h"

/*
	
*/

void bfs(GRAPH* g)
{
	
	QUEUE* q = (QUEUE*)malloc(sizeof(QUEUE)) ;
	initQueue(q, 25); // stack size in struct is 25
	VERTEX* visitOrder[25] = {0};
	int visitNum = 0;
	
	VERTEX* first = g->v; // grabs head
	enque(q, first);
    first->isVisited = 1;
	visitOrder[visitNum++] = first;

	while( !qIsEmpty(q) )
	{
        
		VERTEX* next;
		if(checkOtherChild( qPeek(q) ) ) // if current vertex has another child queue is
		{
			next = checkOtherChild(qPeek(q));
			
			next->isVisited = 1;
			enque(q, next);
			visitOrder[visitNum++] = next;
		}
		else
        {
			
            deque(q);
        }
		
	}
	
	
	int index = 0;
	printf("\nBFS visit order: \n");
	while( visitOrder[index] != NULL)
		printf("%c ", visitOrder[index++]->c);
    printf("\n\n");
	//printf("\nCUrrent visitNum = %d", visitNum);
}


