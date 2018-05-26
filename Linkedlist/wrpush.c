#include"node.h"
 
node* wrpush(node* head,int data)
{
	node *newnode=malloc(sizeof(node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
	
	return head;
	
}
