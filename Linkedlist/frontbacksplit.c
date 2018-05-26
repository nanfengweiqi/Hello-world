#include"node.h" 
/*
�������б�Ľڵ���Ϊǰ��������,��ʹ��
���ò������������б�.�������Ϊ����,
�����ڵ�Ӧ����ǰ�б�
*/
// ʹ��"�����ڵ�"����
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
		//�����ڵ�ǰλ�ýص� 
		*frontref=source;
		*backref=current->next;
		current->next=NULL;
	}
}

//ʹ�ÿ�/��ָ����� 
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
