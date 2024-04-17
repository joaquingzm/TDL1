#include <stdio.h>
#include <stdlib.h>
typedef enum {LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO}dias_semana;
int main()
{
    char v_string[7][10]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    printf("%s",v_string[MIERCOLES]);
    return 0;
}
