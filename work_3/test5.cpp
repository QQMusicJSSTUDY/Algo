#include <stdio.h>
#include <stdlib.h>
#include "Status.h"
#include "SinglyLinkedList.cpp"

Status Algo_2_19(LinkList L,int mink,int mark);
void PrintElem(LElemType_L e);

int main(int argc,char *argv[])
{
	LinkList L;
	int mink,maxk,i;
	int a[]={1,2,2,3,4,5,6,7,7};
	mink=2;
	maxk=4;
	
	InitList_L(&L);
	
	for(i=0;i<10;i++)
		ListInsert_L(L,i+1,a[i]);
	
	printf("ԭ����L=");
	ListTraverse_L(L,PrintElem);
	printf("\n\n");
	
	printf("��2.19��֤\n");
	printf("ɾ�������д���%d��С��%d��Ԫ��֮��...\n",mink,maxk);
	Algo_2_19(L,mink,maxk);
	printf("L=");
	ListTraverse_L(L,PrintElem);
	printf("\n");
	
	return 0;
}

Status Algo_2_19(LinkList L,int mink,int maxk)
{
	LinkList p,pre,s;
	
	if(!L || !L->next)
		return ERROR;
	if(mink>=maxk)
		return ERROR;
	pre=L;
	p=pre->next;
	while(p&&p->data<maxk)
	{
		if(p->data<=mink)
		{
			pre=p;
			p=p->next;
		}
		else
		{
			s=p;
			pre->next=p->next;
			p=p->next;
			free(s);
		}
	}
	return OK;
}

void PrintElem(LElemType_L e)
{
	printf("%d",e);
}