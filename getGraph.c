#include"my.h"

/*
	Returns a char array of the different vertices in the file
	size = size of VERTEX array
*/
GRAPH* getGraph( char* inputChars, int size )
{
	int i;
	int elements = 0;
	GRAPH* g = (GRAPH*) malloc(sizeof(GRAPH));
    g->size = 0; // initalize the graphs total size
	VERTEX* array = (VERTEX*)calloc(size, sizeof(VERTEX));
	char* vertices = (char*) calloc( size, sizeof(char)); // grabs each unique character.. not dups
	
	for(i  = 0; i < size; i++)
	{
		if(strchr(vertices, inputChars[i]) == NULL  )
		{
			vertices[elements] = inputChars[i];
			
            g->size++;
			array[elements].c = inputChars[i];
			array[elements].isVisited = false;
			array[elements].p = NULL;
			//array[elements].p->q = NULL; // may not need to set the next thing to null
			//array[elements].p->v = NULL; // many need to try this if edge necessary to create an edge
			elements++;
		}
	}
	g->v = array;
	g->size =  elements; 
	
	return g;
  
}