#include <stdlib.h>
#include <stdio.h>

typedef struct{
    long int DNI;
    long int posicionABS;
}elemento;



int main(){
    FILE *ptr = fopen("Recursos/personas.csv","r+b");
    elemento *indice=NULL;
    dimIndice=0;
    if(ptr!=NULL){
        crearIndice(indice,dim,ptr);
        fclose(ptr);
    }
}

void crearIndice(elemento *indice,dim,ptr){
    indice = (elemento*) malloc(10*sizeof(elemento));
    elemento aux;
    fscanf(ptr,"%lf;",&(aux.DNI));
    aux.posicionABS=ftell(ptr);
    while(!feof(ptr)){

    }
}

void insertarEnIndice()

