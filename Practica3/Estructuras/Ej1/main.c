#include <stdio.h>
#include <stdlib.h>
typedef struct {
        float base;
        float altura;
    }Rectangulo;
void inicializarRec(Rectangulo *r);
float areaRec(Rectangulo *r);
int main()
{
    Rectangulo r;
    inicializarRec(&r);
    printf("Base: %.2f, Altura:%.2f\n",r.base,r.altura);
    Rectangulo v_r[5];
    int i=0;
    for(;i<5;i++){
        printf("Rectagulo %d:\n",i+1);
        inicializarRec(&v_r[i]);
    }
    for(i=0;i<5;i++){
        printf("Area rec %d: %f\n",i+1,areaRec(&v_r[i]));
    }
    return 0;
}

void inicializarRec(Rectangulo *r){
    printf("Ingrese base:");
    scanf(" %f",&(r->base));
    printf("Ingrese altura:");
    scanf(" %f",&(r->altura));
}
float areaRec(Rectangulo *r){
    return (float)(r->altura)*(r->base);
}
