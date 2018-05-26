#include"node.h"
/*
 Using recursive stack space proportional to the length of a list is not
recommended.
*/
/*
This solution uses the local reference
*/
node *sortedintersect(node *a,node *b)
{
	node *result=NULL;
	node **lastptrref=&result;
	
	while(a!=NULL&&b!=NULL)
	{
		if(a->data==b->data)// found a node for the intersection
		{
			push(lastptrref,a->data);
			lastptrref=&((*lastptrref)->next);
			a=a->next;
			b=b->next;
		}
		else if(a->data<b->data)// advance the smaller list
		{
			a=a->next;
		} 
		else
		{
			b=b->next;
		}
	}
	return result;
}

