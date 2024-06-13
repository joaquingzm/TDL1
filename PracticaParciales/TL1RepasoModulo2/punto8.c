#include <stdio.h>
#include <stdlib.h>


struct nodo{
    int dato;
    struct nodo *siguiente;
};
typedef struct nodo lista;

int eliminarNodo(lista **,int);
void añadirNodo(lista **,int);
void imprimirLista(lista *l);

int main(){
    lista *l=NULL;
    añadirNodo(&l,40);
    añadirNodo(&l,30);
    añadirNodo(&l,20);
    añadirNodo(&l,10);
    imprimirLista(l);
    eliminarNodo(&l,20);
    imprimirLista(l);
}

int eliminarNodo(lista **l,int data){
    lista *aux,*ant;
    ant=*l;
    aux=*l;
    while(aux->dato!=data&&aux!=NULL){
        ant=aux;
        aux=aux->siguiente;
    }
    if(ant==aux){
        *l=(*l)->siguiente;
        free(aux);
        return 1;
    }
    else if(aux!=NULL){
        ant->siguiente=aux->siguiente;
        free(aux);
        return 1;
    }
    return 0;
}

void añadirNodo(lista **l,int data){
    lista *aux;
    aux=(lista*)malloc(sizeof(lista));
    if(*l==NULL){
        aux->siguiente=NULL;
    }
    else{
        aux->siguiente=*l;
    }
    *l=aux;
    aux->dato=data;
}

void imprimirLista(lista *l){
    int i=0;
    while(l!=NULL){
        i++;
        printf("Nodo %d dato: %d\n",i,l->dato);
        l=l->siguiente;
    }
    printf("\n");
}