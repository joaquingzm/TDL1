#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max,min,n;
    printf("Cantidad de numeros a ingresar: ");
    scanf("%d",&n);
    max_min_float(n,&max,&min);
    printf("Max: %d, Min: %d\n",max,min);
    return 0;
}
void max_min_float(int n,int* max,int* min)
{
    int mx=-9999;
    int mn=9999;
    int aux;
    for(;n>0;n--)
    {
        printf("Num: ");
        scanf("%d",&aux);
        if(aux>mx)mx=aux;
        if(aux<mn)mn=aux;
    }
    *min=mn;
    *max=mx;
}
