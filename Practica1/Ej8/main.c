#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Codigo a)
    int edad = 50;
    if (edad >= 40)
    printf("Tiene %d años o más\n",40);
    else
    printf("Tiene menos de %d años\n",40);
    //Solucion: Despues del if y else no va ningun ; y en los printf no va &

    //Codigo b)
    int total, x = 1;
    while (x <= 10) {
        total += x;
        ++x;
    }
    printf("Total = %d\n",total);
    //Solucion: En printf iba d en vez de f

    //Codigo c)
    int valor;
    scanf("%d",&valor);
    switch (valor % 2) {
        case 0: printf("El valor es par\n");break;
        case 1: printf("El valor es impar\n");
    }
    //Solucion: El swtich case necesita de un break antes del siguiente case
    printf("d)\n");
    //Codigo d)
    int a,y;
    scanf("%d",&a);
    scanf("%d",&y);
    printf("a + y = %d ",a+y);
    return 0;
}
