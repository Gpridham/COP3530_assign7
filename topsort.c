#include"my.h"

void topSort(GRAPH* g)
{
	int totalVertices = g->size;
	int index = totalVertices -1; // start inserting visitorder at the end of array
	
	char* visitOrder = (char*) calloc(totalVertices, sizeof(char));
	
	while( totalVertices > 0 )
	{
		setToNotVisited(g); // for when checking for nosuccessor
		VERTEX* cVex = noSuccessor( g->v);
		if(cVex == NULL)
		{
			printf("\aError: Graph has cycles\n");
			return;
		}
		
		visitOrder[index--] = cVex->c;
		
		deleteVertex(g, cVex);
        //printf("Deleted %c\n", cVex->c);
		
		totalVertices--;
		
	}
	
	printf("Topological Sort:\n");
	int i;
	for(i = 0; i < g->size; i++)
	{
		printf("%c ", visitOrder[i]);
	}
	printf("\n");
}

















