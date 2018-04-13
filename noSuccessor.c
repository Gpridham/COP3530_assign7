#include"my.h"

// searches for a vertex with no successor and returns it
// Dont take into account if there is a case where there is never going to be no successor
// Assignment says we dont need to worry about cycles.. so there should always be one with no successor
VERTEX* noSuccessor(VERTEX* v)
{
	VERTEX* cVex = v;
	cVex->isVisited = 1;
	while(cVex->p != NULL  && cVex->p->v->isVisited == 0) // if vertex has adjacent vertex 
	{
		cVex = cVex->p->v;
		cVex->isVisited = 1;
	}
	
	if(cVex->p == NULL) // returns vertex with no successor
		return cVex;
	else
		return NULL; // returns null if graph has cycles
}