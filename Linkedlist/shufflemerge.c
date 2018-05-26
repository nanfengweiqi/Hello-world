#include"node.h"
/*
Merge the nodes of the two lists into a single list taking a node
alternately from each list, and return the new list.
*/
/*
The recursive solution is the most compact of all, but is probably not appropriate for
production code since it uses stack space proportionate to the lengths of the lists.
*/ 
node *shufflemerge(node *a,node *b)//Uses a local reference to get rid of the dummy nodes entirely.
{
	node *result;
	node *recur;
	
	if(a==NULL)return b;
	else if(b==NULL)return a;
	else
	{
		// it turns out to be convenient to do the recursive call first --
		// otherwise a->next and b->next need temporary storage.
		recur=shufflemerge(a->next,b->next);
		
		result=a;// one node from a
		a->next=b;//one from b
		b->next=recur;// then the rest
		
		return result;

	}
}
