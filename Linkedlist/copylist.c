#include"node.h"
//¸´ÖÆÁ´±í 
node *copylist(node *head)
{
	node *current=head;
	node *newlist=NULL;
	node *tail=NULL;
	while(current!=NULL)
	{
		if(newlist==NULL)
		{
			newlist=malloc(sizeof(node));
			newlist->data=current->data;
			newlist->next=NULL;
			tail=newlist;
		}
		else
		{
			tail->next=malloc(sizeof(node)) ;
			tail=tail->next;
			tail->data=current->data;
			tail->next=NULL;
		}
		current=current->next;
	}
	return newlist;
}
node *copylistwilhrecur(node *head)
{
	node *current=head;
	if(head==NULL)
	{
		return NULL;
	}
	else
	{
		node *newlist=malloc(sizeof(node));
		newlist->data=current->data;
		newlist->next=copylistwilhrecur(current->next);
		return head;
	}
}
