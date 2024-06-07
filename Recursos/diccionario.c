#include "diccionario.h"
#ifndef _STDIO_H
#include <stdio.h>
#endif
#ifndef _STDLIB_H
#include <stdlib.h>
#endif
#ifndef _STRING_H
#include <string.h>
#endif

Diccionario* d_create(){
    Diccionario *aux = (Diccionario*)malloc(sizeof(Diccionario));
    aux->HD=NULL;
    aux->HI=NULL;
    aux->data=NULL;
    return aux;
}

int d_add(Diccionario *d,char *str){
    if(*d!=NULL){
        nodo *aux = *d;
        while(aux!=NULL){
            if(strcmp(str,aux->data)<0){
                if(aux->HI==NULL){
                    aux->HI=(nodo*)malloc(sizeof(nodo));
                    aux->HI->HI=NULL;
                    aux->HI->HD=NULL;
                    strcpy(aux->HI->data,str);
                    return 1
                }
                aux=aux->HI;
            }
            else if(strcmp(str,aux->data)>0){
                if(aux->HD==NULL){
                    aux->HD=(nodo*)malloc(sizeof(nodo));
                    aux->HD->HI=NULL;
                    aux->HD->HD=NULL;
                    strcpy(aux->HD->data,str);
                    return 1
                }
                aux=aux->HD;
            }
            else {
                return 0;
            }
        }

    }
    return 0;
}


int d_exists(Diccionario *d,char *str){
    if(*d!=NULL){
        if(!strcmp(d->data,str))return 1;
        return (d_exists(d->HI,str)?1:(d_exists(d->HD,str)));
    }
    return 0;
}

int d_eliminate(Diccionario *d,char *str){
    if(*d!=NULL){
        nodo *act = *d;
        nodo *aux;
        nodo *ant;
        nodo *auxEliminate;
        while(act!=NULL){
            if(strcmp(str,act->data)<0){
                if(act->HI==NULL){
                    return 0;
                }
                if(!strcmp(act->HI->data,str)){
                    auxEliminate=act->HI;
                    if(act->HI->HD==NULL){
                        act->HI=act->HI->HI;
                    }
                    else{
                        aux=act->HI->HD;
                        while(aux!=NULL){
                            ant=aux;
                            aux=aux->HI;
                        }
                        ant->HD=act->HI->HD;
                        act->HI=ant;
                    }
                    free(auxEliminate);
                    return 1;
                }
                act=act->HI;
            }
            else if(strcmp(str,act->data)>0){
                if(act->HD==NULL){
                    return 0;
                }
                if(!strcmp(act->HD->data,str)){
                    free(act->HD);
                    act->HD=NULL;
                    return 1;
                }
                act=act->HD;
            }
            else {
                return 0;
            }
        }

    }
    return 0;
}

void d_eliminateHI(nodo *act){
    nodo *aux;
    nodo *ant;
    if(act->HI->HD==NULL){
        aux=act->HI;
        act->HI=act->HI->HI;
        free(aux);
    }
    else{
        aux=act->HI->HD;
        while(aux!=NULL){
            ant=aux;
            aux=aux->HI;
        }
        d_eliminateHI(ant);

    }
    act=act->HI;
}
