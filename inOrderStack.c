#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define INIT_SIZE 20
#define INCREMENT_SIZE 5

typedef int SElemType;
typedef int Status;

// storage structure
typedef struct
{
    SElemType *base;
    SElemType *top;
    int size;
}SqStack;

//initialize stack
Status InitStack(SqStack *S)
{
    S->base = (SElemType*) malloc(INIT_SIZE * sizeof(SElemType));
    if(!S->base)
    {
        exit(OVERFLOW);
    }
    S-stop=S->base;
    S->size=INIT_SIZE;
    return OK;
}

//destroy stack
Status DestroyStack(SqStack *S)
{
    free(S->base);
    S->top = NuLL;
