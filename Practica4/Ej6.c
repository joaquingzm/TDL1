#include <stdio.h>
#include <stdlib.h>

/*
Terminar de chequear cómo hacer que no se imprima el nodo vacío
*/

struct lista
{
    int dato;
    struct lista *sig;
};
typedef struct lista lista;
void inicializar(lista **l);
void crear_lista(lista *p,int n);
void imprimir_lista(lista *p);
int main(){
    lista *p;
    p->dato=0;
    int i;
    crear_lista(p,5);
    imprimir_lista(p);
}

void inicializar(lista **l){
    *l=(lista*) malloc(sizeof(lista));
}
void crear_lista(lista *p,int n){
    int i=0;
    for(i=0;i<n;i++){
        inicializar(&(p->sig));
        p->dato=i+1;
        p=p->sig;
    }
}
void imprimir_lista(lista *p){
    printf("- ");
    while(p!=NULL){
        printf("%d - ",p->dato);
        p=p->sig;
    }
}