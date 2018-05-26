#ifndef _NODE_
#define _NODE_

#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
      int data;
      struct Node* next;
}node;

//创建链表{1,2,3} 
node *buildonetwothree();
//创建链表{2,3}
node *buildtwothree();

//从链表尾部插入节点 
node *buttompush(node *head,int data);
//在链表头部插入节点 
node *wrpush(node *head,int data);

//复制链表 
node *copylist(node *head);
node *copylistwilhrecur(node *head);//用递归方式 


//在链表的空余部分插入节点 
node *insertnth(node **head, int index, int data);

//向递增顺序排列的链表里插入新节点 
node *sortedinsert(node **head,node *newnode) ;
//按顺序排列一个链表 
node *insertsort(node **head);

//将一个链表接在另一个链表后面 
node *append(node **aref, node **bref);
//将一个链表插入另一个链表的空隙 
node *shufflemerge(node *a,node *b);
//将两个按递增顺序的链表合并为一个按顺序递增的链表 
node *sortedmerge(node *a,node *b);
//将两个链表交叉的部分组成一个链表(所谓交叉是指两个链表含有相同的数) 
node *sortedintersect(node *a,node *b);
//将一个链表反转 
node *reverse(node **headref);

//将链表的头节点弹出,就像堆栈里的弹出一样，把弹出的链表释放 
void push(node **headref, int data);
//打印链表 
void printlist(node *head);
//删除链表 
void deletelist(node **head);

//把一个链表里的重复的节点删除 
void removeduplicates(node *head);

//改变链表的头节点 
void movenode(node **destref,node **sourceref);

//将一个链表拆为两个链表,节点数大约个一半 
void frontbacksplit1(node* source,node **frontRef,node **backRef);
void frontbacksplit2(node* source,node **frontRef,node **backRef);

//弹出头节点的数 
int pop(node** head);
//得到链表的长度 
int length(node *head);
//得到链表的index个节点的数目(index从0开始) 
int getnth(node* head, int index);


#endif
