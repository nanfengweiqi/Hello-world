#include"node.h"
/*
Reverse the given linked list by changing its .next pointers and
its head pointer. Takes a pointer (reference) to the head pointer.
*/ 
node *reverse(node **headref)
{
	node *first;
	node *rest;
	
	if(*headref==NULL)return;
	
	first=*headref;
	rest=first->next;
	
	if(rest==NULL)return;
	
	// Recursively reverse the smaller {2, 3} case after: rest = {3, 2}
	reverse(&rest);
	
	// put the first elem on the end of the list
	// (tricky step -- make a drawing)
	first->next->next=first;
	first->next=NULL;
	// fix the head pointer
	*headref=rest;
	return *headref;
}

