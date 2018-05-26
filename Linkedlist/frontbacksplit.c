#include"node.h" 
/*
将给定列表的节点拆分为前后两部分,并使用
引用参数返回两个列表.如果长度为奇数,
则额外节点应进入前列表。
*/
// 使用"计数节点"策略
void frontbacksplit1(node* source,node **frontref,node **backref)
{
	int len=length(source);
	int i;
	node *current=source;
	if(len<2){
		*frontref=source;
		*backref=NULL;
	}				
	else
	{
		int hopcount=(len-1)/2;
		for(i=0;i<hopcount;i++)
		{
			current=current->next;
		}
		//现在在当前位置截掉 
		*frontref=source;
		*backref=current->next;
		current->next=NULL;
	}
}

//使用快/慢指针策略 
void frontbacksplit2(node* source,node **frontref,node **backref)
{
	node *fast;
	node *slow;
	
	if(source==NULL||source->next==NULL)	
	{
		*frontref=source;
		*backref=NULL;
	}
	else
	{
		slow=source;
		fast=source->next;
		
		while(fast!=NULL)
		{
			fast=fast->next;
			if(fast!=NULL)
			{
				slow=slow->next;
				fast=fast->next;
			}	
		}
		*frontref=source;
		*backref=slow->next;
		slow->next=NULL;	
	}
}
