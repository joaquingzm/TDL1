#include <stdlib.h>
#include <stdio.h>

void copiarA(FILE *,FILE *);
void copiarB(FILE *,FILE *);
void copiarC(FILE *,FILE *);

int main(){
    FILE *ptrR=fopen("Ej7R.txt","r");
    if(ptrR!=NULL){
        FILE *ptrW=fopen("Ej7W.txt","w");
        if(ptrW!=NULL){
            copiarB(ptrR,ptrW);
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

void copiarB(FILE *ptrR,FILE *ptrW){
    char aux[15];
    fgets(aux,15,ptrR);
    while(!feof(ptrR)){
        fputs(aux,ptrW);
        fgets(aux,15,ptrR);
    }
}

void copiarC(FILE *ptrR,FILE *ptrW){
    char aux[15];
    int dim;
    dim = fread(aux,sizeof(char),15,ptrR);
    while(!feof(ptrR)){
        fwrite(aux,sizeof(char),dim,ptrW);
        dim = fread(aux,sizeof(char),15,ptrR);
    }
}