#include"my.h"

void visitAdjVer(STACK* s, VERTEX* v, VERTEX** visitOrder, int* visitNum)
{
	VERTEX* cVex;
	if(v->p != NULL && v->p->v->isVisited == 0) // if vertex has adjacent vertex and hasnt been visited yet
	{
		cVex = v->p->v;
		//printf("\ncVex = %c \n", cVex->c); // debugging
		cVex->isVisited = 1;
		push(s, cVex);
		visitOrder[(*visitNum)++] = cVex;
		
		visitAdjVer(s, cVex, visitOrder, visitNum);
	}
	
	return;
	
}