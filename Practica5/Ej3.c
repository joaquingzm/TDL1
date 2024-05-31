#include <stdio.h>
#include <stdlib.h>

int main(){
    int aux,i=1,maxP=0,maxPDia=0;
    FILE *f=fopen("Recursos/Ej3.txt","r");
    fscanf(f,"%d-",&aux);
    while(!feof(f)){
        printf("Dia %d: %d\n",i,aux);
        if(aux>maxP){
            maxP=aux;
            maxPDia=i;
        }
        i++;
        fscanf(f,"%d-",&aux);
    }
    printf("\nEl Dia %d fue el de mayor precipitacion\n",maxPDia);
}
