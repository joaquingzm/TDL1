#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=50;i++)if(!(i%5)) printf("%d\n",i);
    printf("\n");
    for(i=5;i<=50;i=i+5) printf("%d\n",i);
}
