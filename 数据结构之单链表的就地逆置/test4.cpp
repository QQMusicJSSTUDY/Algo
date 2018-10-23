#include <stdio.h>
#include "Status.h"
#include "SinglyLinkedList.cpp"

Status Algo_2_22(LinkList L);
void PrintElem(LElemType_L e);

int main(int argc,char *argv[])
{
	LinkList L;
	int i;
	
	if(InitList_L(&L))
	{
		for(i=1;i<=10;i++)
			ListInsert_L(L,i,i);
	}
	
	printf("L=");
	ListTraverse_L(L,PrintElem);
	printf("\n\n");
	
	printf("逆置单链表...\n");
	Algo_2_22(L);
	printf("此时L=");
	ListTraverse_L(L,PrintElem);
	printf("\n\n");
	
	return 0;
}

Status Algo_2_22(LinkList L)
{
	LinkList pre,p;
	
	if(!L || !L->next)
		return ERROR;
	
	p=L->next;
	L->next=NULL;
	
	while(p)
	{
		pre=p;
		p=p->next;
		pre->next=L->next;
		L->next=pre;
	}
	
	return OK;
}

void PrintElem(LElemType_L e)
{
	printf("%d",e);
}