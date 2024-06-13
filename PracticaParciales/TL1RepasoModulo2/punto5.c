#include <stdio.h>
#include <stdlib.h>

struct destino { 
   int codProv; 
   int codLoc; 
   char nomLoc[30]; 
   int nHab; 
};

int main(){
    FILE *ptrTXT = fopen("punto5.txt","r");
    if(ptrTXT==NULL){
        printf("Error abriendo el txt");
        return 1;
    }
    FILE *ptrB = fopen("punto5B.dat","wb+");
    if(ptrB==NULL){
        printf("Error abriendo el binario");
        return 1;
    }
    struct destino *aux;
    aux=(struct destino*)malloc(sizeof(struct destino));
    
    while(fscanf(ptrTXT,"%d %d %s %d",&(aux->codProv),&(aux->codLoc),(aux->nomLoc),&(aux->nHab))==4){
        fwrite(aux,sizeof(struct destino),1,ptrB);
    }
    rewind(ptrB);
    while(fread(aux,sizeof(struct destino),1,ptrB)==1){
        printf("%d %d %s %d\n",aux->codProv,aux->codProv,aux->nomLoc,aux->nHab);
    }
    fclose(ptrB);
    fclose(ptrTXT);
    free(aux);
    return 0;
}