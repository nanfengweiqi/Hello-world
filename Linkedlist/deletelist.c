#include"node.h"
//ɾ������ 
void deletelist(node **head)
{
	node *current=*head;
	if(*head==NULL){
		return;
	}
	while(current->next!=NULL){
		node *q=current->next;
		current->next=current->next->next;
		free(q);
		}
	free(current);
	*head=NULL;
}
