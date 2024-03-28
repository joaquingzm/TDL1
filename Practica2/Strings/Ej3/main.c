#include <stdio.h>
#include <stdlib.h>
void reemplazar(char *,char,char);
int main()
{
    char str[]="holacomoestas";
    char *ptr=str;
    printf("%s\n",str);
    reemplazar(ptr,'s','A');
    printf("%s\n",str);
    return 0;
}

void reemplazar(char *ptr,char a,char b){
    int i=0;
    while(*(ptr+i)!='\0'){
        if(*(ptr+i)==a){
            *(ptr+i)=b;
        }
        i++;
    }
}
