#include"node.h"
/*
A more general version of Push().Given a list, an index 'n' in the 
range 0..length,and a data element, add a new node to the list so that it 
has the given index.
*/

/*如果一个链表有n个节点，那么可插入的位置为n+1个 
*/
node *insertnth(node **head, int index, int data)
{
	node *current=*head,*ptemp=*head;
	node *newnode=malloc(sizeof(node));
	int len=length(current);
	if(index==0){
		newnode->next=current;
		newnode->data=data;
		*head=newnode;
	}
	else if(index==len+1)
	{
		ptemp=*head;
		while(ptemp->next!=NULL)
		{
			ptemp=ptemp->next;
		}
		ptemp->next=newnode;
		newnode->data=data;
		newnode->next=NULL;
	}
	else if(index<0||index>len+1)
	{
		printf("超出范围\n");
	}
	else
	{
		int i=1,j=1;
		while(i!=index)
		{
			i++;
			current=current->next;
		}
		while(j!=index+1)
		{
			ptemp=ptemp->next;
			j++;
		}
		current->next=newnode;
		newnode->data=data;
		newnode->next=ptemp;
	}
	return *head;
}
