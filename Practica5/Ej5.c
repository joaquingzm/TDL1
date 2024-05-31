#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reservarMemoria(char ***,int );
void levantarDataDiccionario(char ***,int *,int *);
void procesarIngreso(char**,int );
int existeEnArreglo(char **,char* ,int );

int main(){
    char * *arregloPalabras=NULL;
    //IMPORTANTE INICIALIZAR EN NULL, SINO EL REALLOC NO ANDA
    int dimL=0,dimF=0;
    levantarDataDiccionario(&arregloPalabras,&dimL,&dimF);
    procesarIngreso(arregloPalabras,dimL);

}
void reservarMemoria(char ***a,int n){
    (*a)=(char**)realloc(*a,n*sizeof(char*));
}
void levantarDataDiccionario(char ***arreglo,int *dimL,int *dimF){
    char aux[15];
    FILE *ptr=fopen("Recursos/Ej5.txt","r");
    if(ptr!=NULL){
        fscanf(ptr,"%s",aux);
        while(!feof(ptr)){
            if(*dimL==*dimF){
                reservarMemoria(&(*arreglo),5+*dimL);
                (*dimF)+=5;

            }
            *(*arreglo+*dimL)=(char*) malloc(15*sizeof(char));
            strcpy(*(*arreglo+*dimL),aux);
            (*dimL)++;
            fscanf(ptr,"%s",aux);
        }
        fclose(ptr);
    }else{
        printf("Todo mal con el archivo\n");
    }
}
void procesarIngreso(char**arreglo,int dimL){
    char aux[15];
    printf("Ingrese palabra a buscar en el diccionario: ");
    scanf("%s",aux);
    while(strcmp(aux,"ZZZ")){
        if(existeEnArreglo(arreglo,aux,dimL))printf("La palabra ingresada se encuentra en el diccionario\n");
        else printf("La palabra ingresada no se encuentra en el diccionario\n");
        printf("Ingrese palabra a buscar en el diccionario: ");
        scanf("%s",aux);
    }
}
int existeEnArreglo(char **arreglo,char* elemento,int dimL){
    int i=0;
    for(;i<dimL;i++){
        if(!strcmp(elemento,*(arreglo+i)))return 1;
    }
    return 0;
}
