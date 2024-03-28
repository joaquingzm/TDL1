#include <stdio.h>
#include <stdlib.h>
#include "../../ArreglosEstaticos/Ej2/promediominmax.h"
#include "../../ArreglosEstaticos/Ej2/promediominmax.c"
int main()
{
    int i,dim=5;
    float arreglo[]={0.5,1.4,5.7,2,6.1};
    for(i=0;i<dim;i++){
        printf("%d - %.2f\n",i,arreglo[i]);
    }
    float aux[3];
    float *ptr=aux;
    funcion(arreglo,dim,ptr);
    printf("Promedio: %.2f\n",aux[0]);
    printf("Min: %.2f\n",aux[1]);
    printf("Max: %.2f\n",aux[2]);
    return 0;
}

void funcion(int arreglo[],int dim,float *ptr){
    ptr[0]=promedio_arreglo(arreglo,dim);
    *(ptr+1)=min_arreglo(arreglo,dim);
    *(ptr+2)=max_arreglo(arreglo,dim);
}
/*float promedio_arreglo(float a[],int diml){
    int i;
    float aux=0;
    for(i=0;i<diml;i++){
        aux+=a[i];
    }
    return (aux/diml);
}

float min_arreglo(float a[],int diml){
    int i;
    float min=99999;
    for(i=0;i<diml;i++){
        if(a[i]<min)min=a[i];
    }
    return min;
}

float max_arreglo(float a[],int diml){
    int i;
    float max=-99999;
    for(i=0;i<diml;i++){
        if(a[i]>max)max=a[i];
    }
    return max;
}*/
