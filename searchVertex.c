#include"my.h"

/*
	Returns index of vertex if found
	or returns -1 if not found
*/
int searchVertex( GRAPH* g, char c )
{
	int i;
	for(i = 0; i < g->size; i++)
	{
		if( g->v[i].c == c)
			return i;
	}
	
	return -1;
}