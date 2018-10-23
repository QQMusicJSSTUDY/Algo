#include <stdio.h>
#include <stdlib.h>
#include "Status.h"
#include "SequenceList.cpp"

Status Algo_2_11(SqList *va,LElemType_Sq x);
void PrintElem(LElemType_Sq e);

int main(int argc,char *argv[])
{
	SqList L;
	int i;

	if(InitList_Sq(&L))
	{
		for(i=1;i<=10;i++)
			ListInsert_Sq(&L,i,2*i);
	}

	printf("L=");
	ListTraverse_Sq(L,PrintElem);
	printf("\n\n");

	printf("将元素 \"5\" 插入到链表L中...\n");
	Algo_2_11(&L,5);
	printf("此时L=");
	ListTraverse_Sq(L,PrintElem);
	printf("\n\n");

	return 0;
}

/*将x插入到递增序列va中*/
Status Algo_2_11(SqList *va,LElemType_Sq x)
{
	int i;
	LElemType_Sq *newbase;

	if(!(*va).length)
		return ERROR;
	if((*va).length=(*va).listsize) //若存储空间已满，需要开辟新空间
	{
		newbase=(LElemType_Sq*)realloc((*va).elem,((*va).listsize+LISTINCREMENT)*sizeof(LElemType_Sq));
		if(!newbase)
			exit(OVERFLOW);

		(*va).elem=newbase;
		(*va).listsize+=LISTINCREMENT;
	}
	for(i=(*va).length;i>=1;i--)
	{
		if((*va).elem[i-1]>x)
			(*va).elem[i]=(*va).elem[i-1];
		else
			break;
	
	}

	(*va).elem[i]=x;
	(*va).length++;

	return OK;
			
	
}

void PrintElem(LElemType_Sq e)
{
	printf("%d",e);
}



