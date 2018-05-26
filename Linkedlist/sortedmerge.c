#include"node.h"
/*
Takes two lists sorted in increasing order, and splices their 
nodes together to make one big sorted list which is returned.
*/
node* sortedmerge(node *a,node *b)
{
	node *result=NULL;
	//base cases
	if(a==NULL)return b;
	else if(b==NULL)return a;
	
	//pick either a or b,and recur
	if(a->data<=b->data)
	{
		result=a;
		result->next=sortedmerge(a->next,b);	
	}	
	else
	{
		result=b;
		result->next=sortedmerge(a,b->next);
	}
	return result;
}
