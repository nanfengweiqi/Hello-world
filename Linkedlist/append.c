#include"node.h"
// ������b��������a��β����Ȼ�������b��ֵΪNULL
node *append(node **aref, node **bref)
{
	node *head=malloc(sizeof(node));
	node *currenta=*aref;
	node *currentb=*bref;
	if(currenta!=NULL&&currentb!=NULL){
		while(currenta->next!=NULL){
			currenta=currenta->next;
		}
		currenta->next=currentb;
	}
	else if(currenta==NULL&&currentb!=NULL)
	{
		*aref=*bref;
	}
	*bref=NULL;
	head=*aref;
	return head; 
} 
