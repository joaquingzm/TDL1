#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int es_pal_a(char []);
int main()
{
    char str[]="seres";
    printf("%s %d\n",str,es_pal_a(str));
    char str1[]="aooa";
    printf("%s %d\n",str1,es_pal_a(str1));
    char str2[]="ooa";
    printf("%s %d\n",str2,es_pal_a(str2));
    return 0;
}

int es_pal_a(char str[]){
    int i,dim=strlen(str);
    bool aux=true;
    while(aux&&(i<(dim/2))){
        if(str[i]!=str[dim-1-i])aux=false;
        i++;
    }
    return aux;
}
