#include"my.h"

/*
	Deletes the vertex and all the edges pointing to it
*/
void deleteVertex(GRAPH* g, VERTEX* v)
{
	/*
		If v edge points to a vertex to be deleted
		check if that edge has a edge,
		if so set v->edge = v->edge->edge
		else
			just set v->edge = NULL
		
		CUrrently set to delete in individual branches..
	*/

    
    int index;
    for(index = 0; index < g->size; index++) // loops to the next head of the branch
    {
        VERTEX* current = &g->v[index];
		
		if( current != NULL)
		{
			EDGE* next = current->p;
			
			 if(next != NULL ) // if next isnt null 
			{
				if(next->v->c == v->c) //vertex  is what we want to delete
				{
					 if(next->q != NULL)
						current->p = next->q;
					else
						current->p = NULL;
				}
			
				while(next->q != NULL) // loops through a each branch
				{
					if(next->q->v->c == v->c) //vertex  is what we want to delete
					{
						 if(next->q->q != NULL)
							next->q = next->q->q;
						else
							next->q = NULL;
						
						break;
						
					}
					else
					{
						next = next->q;
					}
					
				} // end of while
			}
			
			 if(current->c == v->c)
			 {
				 //printf("CUrrent = %c\n", current->c);
				// current = NULL;
				
			 }
        
		} // end of if current != NULL
	
	} // end of for loop

    
	
}
