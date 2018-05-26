#include"node.h"
/*
/Given a list and an index, return the data in the nth node of the list. 
//The nodes are numbered from 0.
// Assert fails if the index is invalid (outside 0..lengh-1).
*/
int getnth(node* head, int index)
{
	int len,count=0,number;
	node *current=malloc(sizeof(node));
	len=length(head);
	if(index<0||index>len-1)return -1;
	else
	{
		current=head;
		while(current!=NULL){ 
			count++;
			if(count==(index+1)){
				number=current->data;
			}
			current=current->next;
		}		
	}
	return number;
}

