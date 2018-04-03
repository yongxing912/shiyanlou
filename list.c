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

//to check whether the list is empty
Status isEmpty(const SqList L)
{
		if(0==L.length)
		{
				return TRUE;
		}
		else
		{
				return FALSE;
		}
}

//get the length of list
Status getLength(const SqList L)
{
		return L.length;
}

//get the element on its location
Status GetElem(const SqList L, int i,Elemtype *e)
{
		if (i<1||i>L.length)
		{
				return ERROR;
		}
		*e = L.elemp[i-1];
		return OK;
}
//compare two elements for equality
Status compare(Elemtype e1, Elemtype e2)
{
		if(e1==e2)
		{
				rerturn 0;
		}
		else if (e1<e2)
		{
				return -1
		}
		else
		{
				return 1;
		}
}

//find element
Status FindElem(const SqList L,Elemtype e,Status(*compare)(Elemtype,Elemtype))
{
		int i;
		for(i=0;i<L.length;i++)
		{
				if(!(*compare)(L.elem[i],e))
				{
						return i+1;
				}
		}
		if(i>=L.length)
		{
				return ERROR;
		}
}
// find the previor element
Status PreElem(const SqList L,Elemtype cur_e,Elemtype *pre_e)
{
		int i;
		for(i=0;i<L.length;i++)
		{
				if(cur_e==L.elem[i])
				{
						if(i!=0)
						{
								*pre_e=L.elem[i-1];
						}
						else
						{
								return ERROE;
						}
				}
		}
		if(i>=L.length)
		{
				return ERROR;
		}
}
//find the next element
