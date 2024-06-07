#include "istack.h"
#ifndef _STDIO_H
#include <stdio.h>
#endif
#ifndef _STDLIB_H
#include <stdlib.h>
#endif

Stack* s_create(){
    Stack *aux = (Stack*)malloc(sizeof(Stack));
    aux->stackPtr=NULL;
    aux->dim=0;
    return aux;
}

int s_push(Stack *s,int n){
    nodo *auxPtr=(nodo*)malloc(sizeof(nodo));
    auxPtr->sig=s->stackPtr;
    auxPtr->data=n;
    s->stackPtr=auxPtr;
    (s->dim)--;
    return n;
}

int s_pop (Stack *s){
    int auxData = s->stackPtr->data;
    nodo *auxNodo = s->stackPtr;
    s->stackPtr=s->stackPtr->sig;
    (s->dim)--;
    free(auxNodo);
    return auxData;
}

int s_top (Stack *s){
    return (s->stackPtr->data);
}


int s_empty(Stack *s){
    return (s->stackPtr==NULL?1:0);
}

int s_length(Stack *s){
    return s->dim;
}
