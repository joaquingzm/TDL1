#include <stdio.h>
#include <stdlib.h>
#include "multiplicar.h"

int main()
{
    int i;
    scanf("%d",&i);
    if(i==0)printf("hola");
    int x = multiplicar(i,3);
    printf("%d\n",x);

    return 0;
}
