#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define AREA_CIRCULO(r) (PI*r*r)
#define SIZE 10

int main(){
    srand(1);
    double v[SIZE],aux;
    int i;
    for(i=0;i<SIZE;i++){
        aux = (rand()%10)/3.21;
        v[i]=aux;
        printf("Radio: %lf, Area: %lf \n",v[i],AREA_CIRCULO(v[i]));
    }
    return 0;
}
