#ifndef _NODE_
#define _NODE_

#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
      int data;
      struct Node* next;
}node;

//��������{1,2,3} 
node *buildonetwothree();
//��������{2,3}
node *buildtwothree();

//������β������ڵ� 
node *buttompush(node *head,int data);
//������ͷ������ڵ� 
node *wrpush(node *head,int data);

//�������� 
node *copylist(node *head);
node *copylistwilhrecur(node *head);//�õݹ鷽ʽ 


//������Ŀ��ಿ�ֲ���ڵ� 
node *insertnth(node **head, int index, int data);

//�����˳�����е�����������½ڵ� 
node *sortedinsert(node **head,node *newnode) ;
//��˳������һ������ 
node *insertsort(node **head);

//��һ�����������һ��������� 
node *append(node **aref, node **bref);
//��һ�����������һ������Ŀ�϶ 
node *shufflemerge(node *a,node *b);
//������������˳�������ϲ�Ϊһ����˳����������� 
node *sortedmerge(node *a,node *b);
//������������Ĳ������һ������(��ν������ָ������������ͬ����) 
node *sortedintersect(node *a,node *b);
//��һ������ת 
node *reverse(node **headref);

//�������ͷ�ڵ㵯��,�����ջ��ĵ���һ�����ѵ����������ͷ� 
void push(node **headref, int data);
//��ӡ���� 
void printlist(node *head);
//ɾ������ 
void deletelist(node **head);

//��һ����������ظ��Ľڵ�ɾ�� 
void removeduplicates(node *head);

//�ı������ͷ�ڵ� 
void movenode(node **destref,node **sourceref);

//��һ�������Ϊ��������,�ڵ�����Լ��һ�� 
void frontbacksplit1(node* source,node **frontRef,node **backRef);
void frontbacksplit2(node* source,node **frontRef,node **backRef);

//����ͷ�ڵ���� 
int pop(node** head);
//�õ�����ĳ��� 
int length(node *head);
//�õ������index���ڵ����Ŀ(index��0��ʼ) 
int getnth(node* head, int index);


#endif
