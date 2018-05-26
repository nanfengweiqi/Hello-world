#include"node.h"

void movenode(node **destref,node **sourceref)
{
	//the front source node
	node *newnode=*sourceref;
	
	//advance the source pointer
	*sourceref=newnode->next;
	
	//link the old dest off the new node
	newnode->next=*destref;
	//move dest to point to the new node
	*destref=newnode;	
}
