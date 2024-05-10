#include <stdio.h>
#include <stdlib.h>
float promedio_a(float *arreglo,int dim);
float promedio_b(float arreglo[],int dim);
float * reservar_mem(int n);
void inicializar(float *arreglo,int n);
void eliminar_mem(float **arreglo,int n);
int main(){
    int i,n=0;
    printf("Ingrese dimension de arreglo:");
    scanf("%d",&n);
    float *arreglo=reservar_mem(n);
    inicializar(arreglo,n);
    printf("Prom a:%f  , Prom b:%f",promedio_a(arreglo,n),promedio_b(arreglo,n));
    eliminar_mem(&arreglo,n);
    return 0;
}

float * reservar_mem(int n){
    return (float*)calloc(n,sizeof(float));
}
void inicializar(float *arreglo,int n){
    int i;
    for(i=0;i<n;i++){
        printf("Ingrese valor para pos %d:",i);
        scanf("%f",arreglo+i);
    }
}
float promedio_a(float *arreglo,int dim){
    int i;
    float suma=0;
    for(i=0;i<dim;i++){
        suma+=arreglo[i];
    }
    return (suma/dim);
}
float promedio_b(float arreglo[],int dim){
    int i;
    float suma=0;
    for(i=0;i<dim;i++){
        suma+=*(arreglo+i);
    }
    return (float)(suma/dim);
}
void eliminar_mem(float **arreglo,int n){
    free(*arreglo);
    *arreglo=NULL;
}
