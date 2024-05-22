#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("Ej2.txt","r");
    char aux;
    aux = fgetc(f);
    int cont=0;
    while(!feof(f)){
        if((aux>='A'&&aux<='Z')||(aux>='a'&&aux<='z')||(aux>='0'&&aux<='9'))cont++;
        aux = fgetc(f);
    }
    printf("%d",cont);
}