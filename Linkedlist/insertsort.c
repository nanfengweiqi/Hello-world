#include"node.h"

//����������һ������ 
// Given a list, change it to be in sorted order 
//�����õķ����ǣ�
//�Ƚ���һ���ɱ䳤�����������洢��������ڵ��Ԫ��
//Ȼ�������ɱ䳤��������   ð�ݷ���������   ��һ�����������Ϊ��һ����������
//�����һ��������������ڵ�ķ������ν���������������½�������������
//ͷָ�� 
node *insertsort(node **head)  // �����������  
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

