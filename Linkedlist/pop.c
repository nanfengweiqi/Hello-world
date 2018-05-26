#include"node.h"
/*
The opposite of Push(). Takes a non-empty list and removes the front node, 
and returns the data which was in that node.
*/
int pop(node** head)
{
	node *current=*head;
	int number;
	if(current==NULL){
		return;
	}
	else
	{
		number=current->data;
		node *temp=current->next;
		free(current);
		*head=temp;
	}
	return number;	
}
