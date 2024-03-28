#include <stdio.h>
#include <stdlib.h>
int strlen_implementacion(char *);
int main()
{
    char str[]="holacomoestas";
    printf("%d\n",strlen_implementacion(str));
    return 0;
}
int strlen_implementacion(char *ptr){
    int i=0;
    while(*(ptr+i)!='\0'){
        i++;
    }
    return i;
}
