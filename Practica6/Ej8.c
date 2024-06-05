#include <stdio.h>
#include <stdlib.h>
#define DEBUG 1
/*
El archivo ejecutable con DEBUG 0 ocupa 2264 bytes
Con DEBUG 1 ocupa 2416 bytes
Los tamaños difieren porque el archivo ejecutable
es el programa pasado a lenguaje máquina por el compilador. Éste
ignora todo lo que sean comentarios y partes de código no definidas
como es el caso de la parte de debug en la funcion busqueda
*/
int busqueda(int v[],int ,int );
int main(){
    srand(1);
    int v[1000]={0};
    int i;
    for(i=0;i<1000;i++){
        v[i]=rand()%12;
    }
    printf("Posicion de %d : %d",4,busqueda(v,1000,4));
}

int busqueda(int v[],int dim,int elemento){
    int i=0;
    while(i<dim&&v[i]!=elemento){
        i++;
    }
    #if DEBUG
    printf("\n\n DEBUG -- Cantidad de accesos realizados para hallar el elemento: %d\n\n",i);
    #endif // DEBUG
    if(i==dim)return -1;
    return i;
}
