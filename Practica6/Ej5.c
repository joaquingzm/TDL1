#include <stdio.h>
#include <stdlib.h>
#define SIZE 25
/*
a) Da error con "size" porque es una palabra reservada.
Por convención las funciones y nombres de variables se escriben
en minuscula, por lo tanto cuando veo una variable escrita en
mayuscula significa que es una macro

b) En la etapa de precompilación la cadena de caracteres "SIZE" en el código
se reemplaza por la cadena de caracteres "25". Después el programa es compilado
como si en lugar de SIZE hubiera un 25, al no estar entre comilla se interpreta
como número.
*/

void imprimir(int * v, int size){
    int i;
    for (i=0; i<size; i++){
        printf("v[%d]= %d\n", i, v[i]);
    }
}

int main(){
    int v[SIZE]={0};
    imprimir(v, SIZE);
    return 0;
}
