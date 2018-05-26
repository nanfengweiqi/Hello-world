#include"node.h"
//从尾部插入节点 
node* buttompush(node *head,int data)
{
	node* current=malloc(sizeof(node)),*ptemp;
	current->data=data;
	if(head==NULL){
		current->next=NULL;
		current->data=data;
		head=current;	
	}
	else
	{
		ptemp=head;
		while(ptemp->next!=NULL){
			ptemp=ptemp->next;
		}
		current->next=NULL;
		ptemp->next=current;
	}
	return head;
}
