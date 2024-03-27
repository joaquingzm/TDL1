#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial_iterativa(int n)
    {
        int a=n;
        for(;n>1;n--)
        {
            a=a*(n-1);
        }
        return a;
    }
    int factorial_recursiva(int n)
    {
        if(n==0||n==1)return 1;
        n=n*factorial_recursiva(n-1);
        return n;
    }
    int f;
    printf("Factorial de: ");
    scanf("%d",&f);
    printf("%d\n",factorial_iterativa(f));
    printf("%d\n",factorial_recursiva(f));
    return 0;
}
