#include <stdio.h>
#include <stdlib.h>
double promedio_a(double *arreglo,int dim);
double promedio_b(double arreglo[],int dim);
double * reservar_mem(int n);
void inicializar(double *arreglo,int n);
void eliminar_mem(double **arreglo,int n);
int main(){
    int i,n=0;
    printf("Ingrese dimension de arreglo:");
    scanf("%d",&n);
    double *arreglo=reservar_mem(n);
    inicializar(arreglo,n);
    printf("Prom a:%lf  , Prom b:%f",promedio_a(arreglo,n),promedio_b(arreglo,n));
    eliminar_mem(&arreglo,n);
    return 0;
}

double * reservar_mem(int n){
    return (double*)calloc(n,sizeof(double));
}
void inicializar(double *arreglo,int n){
    int i;
    for(i=0;i<n;i++){
        printf("Ingrese valor para pos %d:",i);
        scanf("%lf",arreglo+i);
    }
}
double promedio_a(double *arreglo,int dim){
    int i;
    double suma=0;
    for(i=0;i<dim;i++){
        suma+=arreglo[i];
    }
    return (suma/dim);
}
double promedio_b(double arreglo[],int dim){
    int i;
    double suma=0;
    for(i=0;i<dim;i++){
        suma+=*(arreglo+i);
    }
    return (double)(suma/dim);
}
void eliminar_mem(double **arreglo,int n){
    free(*arreglo);
    *arreglo=NULL;
}
