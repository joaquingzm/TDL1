#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr=fopen("Ej4.txt","r");
    int cod;
    float monto,total=0;
    fscanf(ptr,"%d|%f;",&cod,&monto);
    while(!feof(ptr)){
        total+=monto;
        fscanf(ptr,"%d|%f;",&cod,&monto);
    }
    printf("Monto total: %.1f",total);
}
