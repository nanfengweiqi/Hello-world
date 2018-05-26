#include"node.h"
// 将链表b接在链表a的尾部，然后把链表b赋值为NULL
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
