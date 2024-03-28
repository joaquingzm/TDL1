#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 4;
    int * p1, * p2;
    p1 = &a;
    p2 = &c;
    *p1 = (*p2)++;
    p2 = &b;
    *p1 += *p2;
    printf("hola\n");
    p1 = p2;
    printf("%p\n",p1);
    printf("%p\n",*p1);
    ++*p1;
    printf("%p\n",p1);
    printf("%p\n",*p1);
    printf("hola\n\n");
    p1 = &a;
    *p2*=*p1;
    c = *p2+*p1;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%p\n",p1);
    printf("%p\n",p2);
    a = *p1 = ++*p2;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%p\n",p1);
    printf("%p\n",p2);
    return 0;
}
