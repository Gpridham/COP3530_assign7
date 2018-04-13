#include"my.h"

/*
	Sets all the vertice fields to not visited
*/
void setToNotVisited(GRAPH* g)
{
	int index = 0;
	VERTEX* cVex = &g->v[index];
	while( cVex != NULL && index < g->size)
	{
        //printf("Setting %c to not visited\n", cVex->c);
		cVex->isVisited = 0;
		cVex = &g->v[++index];
	}
}