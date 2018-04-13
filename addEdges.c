#include"my.h"

GRAPH* addEdges( GRAPH* g, char* inputChars)
{
	int i;
	for(i = 0; i < strlen(inputChars); i+=2)
	{
		VERTEX* v1;
		VERTEX* v2;
		
		int loc = searchVertex(g, inputChars[i + 1]);// grab vertex location that is in the right column
		v2 = &g->v[loc];
		
		loc = searchVertex(g, inputChars[i]); // location of vertex in left column
		v1 = &g->v[loc];
		
		addEdge(v1, v2);
	}
		
	
	return g;
}
