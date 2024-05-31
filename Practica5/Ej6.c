#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTCOL 9

//%[^;],aux para leer cadena en la primera fila incluyendo espacios hasta encontrarme con ';'
void levantarCategorias(FILE *,char ***);
void imprimirCategorias(char **);
void procesarDataCSV(FILE *,double *,double *,double *);
void levantarDataCSV(FILE *,double *,double *,double *);
void imprimirMinMaxProm(double *,double *,double *);

int main(){
    FILE *ptr;
    ptr=fopen("Recursos/vinos.csv","r");
    if(ptr!=NULL){
        char **categorias=NULL;
        double min[CANTCOL-1],max[CANTCOL-1],prom[CANTCOL-1];
        int i;
        for(i=0;i<CANTCOL-1;i++){
            min[i]=9999;
        }
        levantarCategorias(ptr,&categorias);
        imprimirCategorias(categorias);
        levantarDataCSV(ptr,min,max,prom);
        printf("\n");
        imprimirMinMaxProm(min,max,prom);
        fclose(ptr);
    }
    return 0;
}

void levantarCategorias(FILE *ptr,char ***ptr_categorias){
    int i;
    char aux[50];
    *ptr_categorias=(char**)malloc(CANTCOL*sizeof(char*));
    for(i=0;i<CANTCOL-1;i++){
        fscanf(ptr,"%[^;];",aux);
        *(*ptr_categorias+i)=(char*)malloc(15*sizeof(char));
        strcpy(*(*ptr_categorias+i),aux);
    }
    fscanf(ptr,"%[^\n]\n",aux);
    *(*ptr_categorias+i)=(char*)malloc(15*sizeof(char));
    strcpy(*(*ptr_categorias+i),aux);
}

void imprimirCategorias(char **categorias){
    int i;
    for(i=0;i<CANTCOL;i++){
        printf("%22s\n",*(categorias+i));
    }
    printf("\n");
}
void procesarDataCSV(FILE *ptr,double *min,double *max,double *prom){
    double auxNums[CANTCOL-1];
    char auxTipo[50];
    int i;
    for(i=0;i<CANTCOL-1;i++){
        fscanf(ptr,"%lf;",auxNums+i);
        if(feof(ptr))return;
        printf("%.2lf  ",auxNums[i]);
        if(auxNums[i]>max[i])max[i]=auxNums[i];
        if(auxNums[i]<min[i])min[i]=auxNums[i];
        prom[i]=prom[i]+auxNums[i];
    }
    fscanf(ptr,"%s",auxTipo);
    printf("%s",auxTipo);
}

void levantarDataCSV(FILE *ptr,double *min,double *max,double *prom){
    int i,contFilas=0;
    while(!feof(ptr)){
        contFilas++;
        procesarDataCSV(ptr,min,max,prom);
        printf("\n");
    }
    for(i=0;i<CANTCOL-1;i++){
        prom[i]=prom[i]/contFilas;
    }
}

void imprimirMinMaxProm(double *min,double *max,double *prom){
    int i;
    printf("Max: ");
    for(i=0;i<CANTCOL-1;i++){
        printf("%.2lf  ",max[i]);
    }
    printf("Min: ");
    for(i=0;i<CANTCOL-1;i++){
        printf("%.2lf  ",min[i]);
    }
    printf("Prom: ");
    for(i=0;i<CANTCOL-1;i++){
        printf("%.2lf  ",prom[i]);
    }
}
