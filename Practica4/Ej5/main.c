#include <stdio.h>
#include <stdlib.h>
void informarMinMayus (char *p);
int main()
{
    char *p;
    int i,cant=4;
    p = calloc(100,sizeof(char));
    for(i=0;i<cant;i++){
        gets(p);
        informarMinMayus(p);
    }
    return 0;
}

void informarMinMayus (char *p){
    int i=0,mayus=0,min=0;
    while(p[i]!='\0'){
        if(p[i]<='z'&&p[i]>='a')min++;
        if(p[i]<='Z'&&p[i]>='A')mayus++;
        i++;
    }
    printf("Cantidad de minusculas:%d , cantidad de mayusculas:%d\n",min,mayus);
}

