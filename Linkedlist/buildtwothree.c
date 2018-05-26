#include"node.h"
//´´½¨Á´±í{2,3} 
node *buildtwothree()
{
	node *second=NULL;
	node *third=NULL;
	
	second=malloc(sizeof(node));
	third=malloc(sizeof(node));
	
	second->data=2;
	third->data=3;
	
	second->next=third;
	third->next=NULL;
	
	return second;
	
}
