#include"node.h"
/*
向一个按递增顺序排列的链表，把一个节点插入正确的位置 
*/
node *sortedinsert(node **head,node *newnode) 
{                                
	node *current=*head;
	node *ptemp=*head;
	if(length(current)==0)
	{
		newnode->next=NULL;
		*head=newnode;
	}
	else if(length(current)==1||current->data>=newnode->data)
	{
		if(current->data>=newnode->data)
		{
			newnode->next=*head;
			*head=newnode;	
		}
		else
		{
			current->next=newnode;
		}	
	}
	else
	{
		 #if 0 
		for(current=current->next;current!=NULL&&current->data<=newnode->data;ptemp=current,current=current->next);
		ptemp->next=newnode;
		newnode->next=current;
		#endif 
		
		
		current=current->next;
		while(current!=NULL&&current->data<=newnode->data){
			ptemp=current;
			current=current->next;
		}
		ptemp->next=newnode;
		newnode->next=current;	
	} 
	
	return *head;
} 
