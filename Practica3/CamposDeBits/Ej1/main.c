#include <stdio.h>
#include <stdlib.h>
typedef struct{
    unsigned int hora : 5;
    unsigned int minutos : 6;
    unsigned int segundos : 4;
}hora;
int main()
{
    hora horario;
    printf("%d %d %d\n",horario.hora,horario.minutos,horario.segundos);
    int h,m,s;
    printf("Hora:");
    scanf("%d",&h);
    printf("Minutos:");
    scanf("%d",&m);
    printf("Segundos:");
    scanf("%d",&s);
    horario.hora=h;
    horario.minutos=m;
    horario.segundos=s;
    printf("%d %d %d\n",horario.hora,horario.minutos,horario.segundos);
    return 0;
}
