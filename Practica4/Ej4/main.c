#include <stdio.h>
#include <stdlib.h>

void reservar(float ** p,int n);
void iniciar(int *p);
void cargar(float *p,int n);
void imprimir_array(float *p,int n);
void maximo(float *p,float *max,int n);

int main()
{
    int n=0;
    srand(time(NULL));
    float *p,max;
    iniciar(&n);
    reservar(&p,n);
    cargar(p,n);
    imprimir_array(p,n);
    maximo(p,&max,n);
    printf("%f",max);
    free(p);
    return 0;
}
    void reservar(float ** p,int n){
        *p=(float *)  calloc(n,sizeof(float));
    }
    void iniciar(int *p){
        printf("Ingrese número:");
        scanf("%d",p);
    }
    void cargar(float *p,int n){
        int i;
        for(i=0;i<n;i++)p[i]=rand()%40;
    }
    void imprimir_array(float *p,int n){
        int i;
        printf("- ");
        for(i=0;i<n;i++){
            printf("%f - ",p[i]);
        }
        printf("\n");
    }
    void maximo(float *p,float *max,int n){
        int i;
        for(i=0;i<n;i++){
            if(p[i]>*max)*max=p[i];
        }
    }


