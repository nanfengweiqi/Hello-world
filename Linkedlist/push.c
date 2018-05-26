#include"node.h"
/*
Takes a list and a data value.Creates a new link with the given data and pushes
it onto the front of the list.The list is not passed in by its head pointer.
Instead the list is passed in as a "reference" pointerto the head pointer -- 
this allows us to modify the caller's memory.
*/
void push(node **headref, int data) 
{
	node* newnode = malloc(sizeof(node));
	newnode->data = data;
	newnode->next = *headref; // The '*' to dereferences back to the real head
	*headref = newnode; // ditto
}

