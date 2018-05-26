#include"node.h"

//按升序排列一个链表 
// Given a list, change it to be in sorted order 
//这里用的方法是：
//先建立一个可变长度数组用来存储链表各个节点的元素
//然后对这个可变长度数组用   冒泡法进行排序   把一个链表排序变为对一个数组排序
//最后建立一个链表，用向后插入节点的方法依次将排序后的数组插入新建的链表，并返回
//头指针 
node *insertsort(node **head)  // 单链表的排序  
{
	node *current=*head;
	node *newhead=NULL; 
	int temp;
	int len=length(current),i,j;
	int *pdata;
	pdata=(int *)malloc(sizeof(int)*len);	
	for(i=0;current!=NULL;current=current->next,i++){
		*(pdata+i)=current->data;
	}
	#if 0
	for(i=0;i<len;i++){
		printf("%d    ",*(pdata+i));
	}
	#endif
    for(i=1;i<len;i++){
    	for(j=0;j<len-i;j++){
    		if(*(pdata+j)>*(pdata+j+1)){
    			temp=*(pdata+j);
    			*(pdata+j)=*(pdata+j+1);
    			*(pdata+j+1)=temp;
			}
		}
	}
	#if 0 
	for(i=0;i<len;i++){
		printf("%d  ",*(pdata+i));
	}
	#endif
	for(i=0;i<len;i++){
		newhead=buttompush(newhead,*(pdata+i));
	} 	
	return newhead;	
}

