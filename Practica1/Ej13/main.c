#include <stdio.h>
#include <stdlib.h>

int main()
{
    int es_primo(int a)
    {
        int x;
        x=a/2;
        while (x>=2)
        {
            if((a%x--)==0)return 0;
        }
        return 1;
    }
    int a;
    printf("Ingresar numero:");
    scanf("%d",&a);
    if(es_primo(a))printf("Es primo\n");else printf("No es primo\n");
    return 0;
}
