#ifndef ISTACK_H_INCLUDED
#define ISTACK_H_INCLUDED

typedef struct _Stack{
    int data;
    struct _Stack *sig;
}Stack

Stack* s_create();

int s_push(Stack +s,int n);

#endif
