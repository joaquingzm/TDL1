#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length=6;
    int arreglo[length],i;
    srand(time(NULL));
    for(i=0;i<length;i++){
        arreglo[i]=rand()%50;
    }
    for(i=0;i<length;i++){
        printf("%d - %d\n",i,arreglo[i]);
    }

    int cant_imp=0,cant_par=0;
    for(i=0;i<length;i+=2)if((arreglo[i]%2)!=0)cant_imp++;
    for(i=1;i<length;i+=2)if((arreglo[i]%2)==0)cant_par++;
    printf("Cantidad de numeros pares en posiciones impares: %d\n",cant_par);
    printf("Cantidad de numeros impares en posiciones pares: %d\n",cant_imp);
    return 0;
}
