#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char a;
    loop: printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf(" %d",&y);
    printf("Operacion: ");
    scanf(" %c",&a);
    switch (a){
        case '+':printf("%d\n",x+y);break;
        case '-':printf("%d\n",x-y);break;
        case '*':printf("%d\n",x*y);break;
        case '/':printf("%.2f\n",x/y);break;
        default:printf("Por favor ingrese una operacion valida\n");goto loop;
    }
    return 0;
}
