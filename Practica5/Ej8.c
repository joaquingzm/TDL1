#include <stdlib.h>
#include <stdio.h>


/*
 El archivo .dat ocupa 40bytes y el txt 10bytes.
 Esto se debe a que el archivo .dat almacena un 
 entero en 4 bytes, por lo tanto 10 enteros -> 40bytes
 Por otro lado el txt almcacena un carácter entero
 en 1 byte, por lo tanto 10 enteros a carácter -> 10bytes
*/

void ingresoNumeros(int [10]);
void cargarVectorB(int [10],FILE *);
void cargarVectorTXT(int [10],FILE *);

int main (){
    FILE *ptrTXT=fopen("Recursos/Ej8.txt","w");
    if(ptrTXT!=NULL){
        FILE *ptrB=fopen("Recursos/Ej8.dat","wb");
        if(ptrB!=NULL){
            int vector[10];
            ingresoNumeros(vector);
            cargarVectorTXT(vector,ptrTXT);
            cargarVectorB(vector,ptrB);
            fclose(ptrB);
        }
        fclose(ptrTXT);
    }
    return 0;
}

void ingresoNumeros(int vector[10]){
    int i;
    for(i=0;i<10;i++){
        printf("Ingresar número %d: ",i);
        scanf("%d",vector+i);
    }
}

void cargarVectorTXT(int vector[10],FILE *ptrTXT){
    int i;
    for(i=0;i<10;i++){
        fprintf(ptrTXT,"%d",vector[i]);
    }
}

void cargarVectorB(int vector[10],FILE *ptrB){
    fwrite(vector,sizeof(int),10,ptrB);
}