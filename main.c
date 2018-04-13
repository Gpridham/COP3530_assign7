/*
	Gabriel Pridham
	N01383793
	
	Data Structures
	COP3530
	
	Project 7 
	

*/

#include"my.h"

int main(int argc, const char *argv[])
{
	
	FILE* dataFile;
	
	if( !( dataFile = fopen(argv[1], "r")) )
	{
		printf("\aError opening %s\n", argv[1] );
		return 100;
	}
	
	char* inputChars = readFile(dataFile);
	
	
	GRAPH* graph = getGraph( inputChars, strlen( inputChars ) );
	addEdges(graph, inputChars);
	printGraph( graph);
	dfs(graph);
	setToNotVisited(graph);
	bfs(graph);
    setToNotVisited( graph );
    topSort( graph );

	free( graph );
	
    return 0;
}


































