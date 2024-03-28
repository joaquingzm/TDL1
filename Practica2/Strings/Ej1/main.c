#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[20]; //Hay alguna manera de limitarle la cantidad de caracteres ingresables al usuario?
    int cant=0;
    do{
        printf("Palabra: ");
        scanf("%s",palabra);
        if(strlen(palabra)>5){
            cant++;
        }
    }while((strcmp(palabra,"ZZZ")!=0));
    printf("Cant de palabras > 5: %d\n",cant);
    return 0;
}
