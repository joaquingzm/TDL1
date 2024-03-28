#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palabra[20];
    int cant=0;
    do{
        printf("Palabra: ");
        scanf("%s",palabra);
        printf("%d\n",strlen(palabra));
        if(palabra[strlen(palabra)-1]=='o'){
            cant++;
        }
    }while((strcmp(palabra,"XXX")!=0));
    printf("Cant de palabras ult char 'o': %d\n",cant);
    return 0;
}
