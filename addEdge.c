#include"my.h"

/*
	Adding v1 -> v2
*/
void addEdge(VERTEX* v1, VERTEX* v2)
{

	EDGE* nEdge = (EDGE*)malloc(sizeof(EDGE));
	nEdge->v = v2;
	nEdge->q = NULL;
	
	EDGE* cEdge; // current Edge being pointed to
	
	// first look at first edge
	if(v1->p == NULL)
		v1->p = nEdge; 
	else // if already one edge.. continue to look for a vacant edge
	{
		cEdge = v1->p;
		while( cEdge->q != NULL)
		{
			cEdge = cEdge->q;
		}
		
		if( cEdge->q == NULL )
		{
			cEdge->q = nEdge;
		}
	}
}