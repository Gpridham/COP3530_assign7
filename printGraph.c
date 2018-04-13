#include"my.h"

void printGraph(GRAPH* g)
{
	int index = 0;
	
	printf("Adjacency Lists: \n");
	
	for(index = 0; index < g->size; index++)
	{
		//VERTEX curentVertex = g->v;
		EDGE* cEdge;
		printf("\n%c ", g->v[index].c  );
		
		if(g->v[index].p != NULL)
			cEdge = g->v[index].p;
		while(cEdge != NULL)
		{
			printf(" -> %c ", cEdge->v->c );
			cEdge = cEdge->q;
		}
		//while(i = 0 ; i < 6; i++)
		//{
		//	printf("%c -> ", (v[index].p)->v->c);
		//}
	}
	
	printf("\n");
}