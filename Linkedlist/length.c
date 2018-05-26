#include"node.h"
/*
求链表的长度 
*/
int length(node *head)
{
	node *current=head;
	int len=0;
	while(current!=NULL)
	{
		len++;
		current=current->next;
	}
	return len;
}
