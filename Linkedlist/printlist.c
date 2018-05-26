#include"node.h"
/*
´òÓ¡Á´±í 
*/ 
void printlist(node *head)
{
    node *current = head;
    while(current!=NULL)
    {
    	printf("%d   ",current->data);
		current=current->next; 
	}
}	

