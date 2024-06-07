#include <stdio.h>
#include <stdlib.h>
#include "../../Recursos/istack.h"
int main()
{
    int num;
    printf("Ingresar Numero: ");
    scanf("%d",&num);
    Stack *sPtr = s_create();
    while(num!=0){
        s_push(sPtr,num);
        printf("Ingresar Numero: ");
        scanf("%d",&num);
    }
    printf("\n\n\n");
    while(!s_empty(sPtr)){
        num = s_pop(sPtr);
        printf("Numero: %d\n",num);
    }
    return 0;
}
