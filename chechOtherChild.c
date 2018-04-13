#include"my.h"

/*
	Checks if there is unvisited children of the Main Vertex of that branch
	Returns NULL if not
*/

VERTEX* checkOtherChild(VERTEX* v)
{
	EDGE* cEdge;
	if( v->p != NULL)
	{
		cEdge = v->p;
	
		while(cEdge->v->isVisited == 1 && cEdge->q != NULL )
		{
			cEdge = cEdge->q;
		}
		
		if(cEdge != NULL && cEdge->v->isVisited == 0)
		{
			return cEdge->v;
		}
	}
	return NULL;
	
}
