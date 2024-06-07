#ifndef _ISTACK_H_INCLUDED
#define _ISTACK_H_INCLUDED
typedef struct _nodo{
    int data;
    struct _nodo *sig;
}nodo;

typedef struct _Stack{
    struct _nodo *stackPtr;
    int dim;
}Stack;

Stack* s_create();

int s_push(Stack *s,int n);

int s_pop (Stack *s);

int s_top (Stack *s);

int s_empty(Stack *s);

int s_length(Stack *s);
#endif
