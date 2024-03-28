#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    char *ptr=str;
    int a=(int)'a';
    int aux;
    int cant[26]={0};
    printf("STR: ");
    scanf("%s",str);
    while((*ptr)!='\0'){
        aux=(int)*ptr;
        cant[aux-a]++;
        ptr++;
    }
    int i;
    for(i=0;i<26;i++){
        printf("%c - %d   ",i+a,cant[i]);
    }
    return 0;
}
