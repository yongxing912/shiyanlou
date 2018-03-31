#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INIT_SIZE 10
#define INCREMENT_SIZE 5

typedef int Status;
typedef int Elemetype;

typedef struct
{
		Elemtype *elem;
		int length;
		int size;
}SqList;

Status InitList(SqList *L)
{
		L->elem =(Elemtype *)malloc(INIT_SIZE *sizeof(Elemtype));
		if(!L-elem)
		{
				return ERROR;
		}
		L->length=0;
		L->size = INIT_SIZE;
		return OK;
}

Status DestroyList(SqList *L)
{
		free(L->elem);
		L-length = 0;
		L-size = 0;
		return OK;
}

Status ClearList(SqList *L)
{
		L->length=0;
		return OK;
}
