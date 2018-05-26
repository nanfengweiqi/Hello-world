#include <stdio.h>
#include <stdlib.h>
#include"node.h"


int main() 
{
	#if 0
	node* head = buildtwothree();// suppose this returns the list {2, 3}
	push(&head, 1); // note the &
	push(&head, 13);// head is now the list {13, 1, 2, 3}
	#endif
	
	#if 0
	node *head=NULL,*tail;
	head=wrpush(wrpush(wrpush(wrpush(head,1),2),3),4);
	printf("%d\n",length(head)); 
	printlist(head);
	tail=copylistwilhrecur(head);
	printf("%d\n",length(tail)); 
	printlist(tail);
	#endif
	
	#if 0
	node *head=NULL;
	head=wrpush(wrpush(wrpush(wrpush(head,1),2),3),4);
	printlist(head);
	printf("\n%d\n",getnth(head,1));
	head=insertnth(&head,6,0);
	printf("%d\n",length(head)); 
	printlist(head);
	#endif
	
	#if 0
	node *head=NULL;
	node newnode={2,NULL};
	head=buttompush(buttompush(buttompush(buttompush(head,1),2),3),4);
	printlist(head);
	head=sortedinsert(&head,&newnode);
	printf("\n%d\n",length(head));
	printlist(head);
	#endif
	
	#if 0
	node *head=NULL;
	head=buttompush(buttompush(buttompush(buttompush(head,2),3),1),4);
	printlist(head);
	head=insertsort(&head);
	printf("\n%d\n",length(head));
	printlist(head);
	#endif
	
	#if 0
	node *head=NULL;
	node *pp=NULL;
	head=buttompush(buttompush(buttompush(buttompush(head,2),3),1),4);
	pp=buttompush(pp,0);
	printf("\n%d\n",length(head));
	printf("\n%d\n",length(pp));
	printlist(head);
	printlist(pp);
	head=append(&head,&pp);
	printf("\n%d\n",length(head));
	printf("\n%d\n",length(pp));
	printlist(head);
	#endif
	
	#if 0
	node *head=NULL,*first=NULL,*second=NULL;
	head=buttompush(buttompush(buttompush(buttompush(head,2),3),1),4);
	frontbacksplit(head,&first,&second);
	printlist(first);
	printf("\n");
	printlist(second);
	#endif
	
	#if 0
	node *head=NULL,*first=NULL,*second=NULL;	
	head=buttompush(buttompush(buttompush(buttompush(buttompush(head,2),3),1),4),5);
	frontbacksplit1(head,&first,&second);
	printlist(first);
	printf("\n");	
	printlist(second);
	#endif
	
	#if 0
	node *head=NULL;
	head=buttompush(buttompush(buttompush(buttompush(buttompush(head,2),2),1),2),5);
	printlist(head);
	removeduplicates(head);
	printlist(head);
	#endif
	
	#if 0 
	//这是将两个链表交替插入一个链表，组成一个链表 
	node *head=NULL;
	node *buttom=NULL;
	node *c=NULL;	
	head=buttompush(buttompush(head,1),3);
	buttom=buttompush(buttompush(buttom,2),4);
	c=shufflemerge(head,buttom);
	printlist(c);
	#endif
	
	#if 0
	node *head=NULL;
	node *buttom=NULL;
	node *c=NULL;	
	head=buttompush(buttompush(head,1),2);
	buttom=buttompush(buttompush(buttom,1),4);
	c=sortedmerge(head,buttom);
	printlist(c);
	#endif
	
	#if 0
	node *head=NULL;
	node *buttom=NULL;
	node *c=NULL;	
	head=buttompush(buttompush(head,1),2);
	buttom=buttompush(buttompush(buttom,1),4);
	c=sortedintersect(head,buttom);
	printlist(c);
	#endif
	
	#if 0
	node *head=NULL;
	node *c=NULL;	
	head=buttompush(buttompush(buttompush(buttompush(head,1),2),3),4);
	c=reverse(&head);
	printlist(c);
	#endif
	
	node *head=NULL;
	node *c=NULL;	
	head=buttompush(buttompush(buttompush(buttompush(head,2),3),1),4);
	c=insertsort(&head);
	printlist(c);
		
	return 0;
}
