#include <stdio.h>
#include <stdlib.h>
void strcopy_implementacion(char *,char *);
int main(){
    char str1[20];
    char str2[]="hola";
    printf("Str1: %s\nStr2: %s\n",str1,str2);
    strcopy_implementacion(str1,str2);
    printf("Str1: %s\nStr2: %s\n",str1,str2);
    return 0;
}
void strcopy_implementacion(char *ptr1,char *ptr2){
    do{
        *(ptr1)=*(ptr2);
        ptr1++;
        ptr2++;
    }while((*ptr2)!='\0');
}
