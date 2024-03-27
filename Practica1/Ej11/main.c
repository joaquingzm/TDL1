#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 0; i <= 11; i++)
    printf("%d\n",i);

    for (i = 0; i <= 11; ++i)
    printf("%d\n",i);

    for (i = 2; i <= 11; i+=2)
    printf("%d\n",i);

    for (i = 1; i <= 11; i*=2)
    printf("%d\n",i);

    for (i = 11; i >= 1; i-=2)
    printf("%d\n",i);

    printf("\n");

    for (i = 11; i > 1; i=+1) //asigna a i el valor 1
    printf("%d\n",i);

    return 0;
}
