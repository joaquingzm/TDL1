#include <stdio.h>
#include "../../Recursos/imath.h"

int main(){
    int num;
    printf("Ingrese numero: ");
    scanf("%d",&num);
    while(num!=-1){
        if(par(num)){
            printf("Cubo: %d, Cuadrado: %d\n\n",cubo(num),cuadrado(num));
        }
        else{
            printf("Factorial: %d \n\n",factorial(num));
        }
        printf("Ingrese numero: ");
        scanf("%d",&num);
    }
    return 0;
}
