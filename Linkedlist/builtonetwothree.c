#include"node.h"
//´´½¨Á´±í{1,2,3} 
node *builtonetwothree()
{
	node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head=malloc(sizeof(node));
    second=malloc(sizeof(node));
    third=malloc(sizeof(node));

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    return head;	
}
