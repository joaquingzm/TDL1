#include <stdlib.h>
#include <stdio.h>

void copiarA(FILE *,FILE *);

int main(){
    FILE *ptrR=fopen("Ej7R.txt","r");
    if(ptrR!=NULL){
        FILE *ptrW=fopen("Ej7W.txt","w");
        if(ptrW!=NULL){
            copiarA(ptrR,ptrW);
            fclose(ptrR);
        }
        fclose(ptrW);
    }
    return 0;
}

void copiarA(FILE *ptrR,FILE *ptrW){
    char aux;
    aux=fgetc(ptrR);
    while(!feof(ptrR)){
        fputc(aux,ptrW);
        aux=fgetc(ptrR);
    }
}
