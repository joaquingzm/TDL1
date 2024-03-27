#include <stdio.h>
#include <stdlib.h>
#include "promediominmax.h"
int main()
{
    int i,dim=5;
    float arreglo[]={0.5,1.4,5.7,2,6.1};
    for(i=0;i<dim;i++){
        printf("%d - %.2f\n",i,arreglo[i]);
    }
    printf("Promedio: %.2f\n",promedio_arreglo(arreglo,dim));
    printf("Min: %.2f\n",min_arreglo(arreglo,dim));
    printf("Max: %.2f\n",max_arreglo(arreglo,dim));
    return 0;
}
