#include <stdio.h>
#include <stdlib.h>

int main()
{
    int invertir(int a)
    {
    int b=0;
    b+=a%10;
    a/=10;
        while(a>0)
        {
            b*=10;
            b+=a%10;
            a/=10;
        }
        return b;
    }
    int x;
    printf("Ingrese un numero a invertir: ");
    scanf("%d",&x);
    printf("Resultado: %d",invertir(x));
    return 0;
}
