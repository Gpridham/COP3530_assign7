/*
	
	Gabriel Pridham
	N01383793
	
	Data Structures
	COP3530
	
	Project 7 
	
	Header file


*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include <unistd.h> // for close()

/* Forward declaration */
struct EDGETAG;


typedef struct
{
    char c;
    bool isVisited;
    struct EDGETAG* p;
} VERTEX;


typedef struct EDGETAG
{
    VERTEX* v;
    struct EDGETAG* q;
} EDGE;

typedef struct
{
	VERTEX* v;
	int size; // total Vertices in graph
} GRAPH;

// stack for DFS

typedef struct
{
	VERTEX v[25];
	int size;
	int top;
	
} STACK;

typedef struct
{
	VERTEX v[25];
	int maxSize; // max amount of elements in queue
	int size; // current elements in queue
	int front; // where queue is pointing
	int rear; // location of next available spot
	
} QUEUE;


// Prototypes
char* readFile(FILE* dataFile);
GRAPH* getGraph( char* inputChars, int size );
void printGraph(GRAPH* g);
int searchVertex( GRAPH* g, char c );
GRAPH* addEdges( GRAPH* g, char* inputChars);
void addEdge(VERTEX* v1, VERTEX* v2);
void setToNotVisited(GRAPH* g);


/* DFS prototypes */
 //void dfs(GRAPH* g, int stackSize, int maxVer);
void dfs(GRAPH* g);
void initStack(STACK* s, int size);
int isEmpty(STACK* s);
VERTEX* peek(STACK* s);
VERTEX* pop(STACK* s);
void push(STACK* s, VERTEX* v);
void printBranch(VERTEX* v); // temporary
void visitAdjVer(STACK* s, VERTEX* v, VERTEX** visitOrder, int* visitNum);
VERTEX* checkOtherChild(VERTEX* v);
void queueBranch(STACK* s, VERTEX* v, VERTEX** visitOrder, int* visitNum); // cant use for DFS.. will use for BFS

/* BFS prototypes*/

void bfs(GRAPH* g);
void initQueue(QUEUE* q, int size);
int qIsEmpty(QUEUE* q);
VERTEX* qPeek(QUEUE* q);
VERTEX* deque(QUEUE* q);
void enque(QUEUE* q, VERTEX* v);


/* TOPOLOGICAL SORT prototypes*/

void topSort(GRAPH* g);
VERTEX* noSuccessor(VERTEX* v);
void deleteVertex(GRAPH* g, VERTEX* v);










