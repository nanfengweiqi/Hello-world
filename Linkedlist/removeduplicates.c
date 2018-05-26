#include"node.h"
// Remove duplicates from a sorted list
void removeduplicates(node *head)
{
	node *current=head;
	if(current==NULL)
	{
		return;	// do nothing if the list is empty	
	}
	// Compare current node with next node
	while(current->next!=NULL)
	{
		if(current->data==current->next->data)
		{
			node *nextnext=current->next->next;
			free(current->next);
			current->next=nextnext;
		}
		else
		{
			current=current->next;// only advance if no deletion
		}
	}
}
