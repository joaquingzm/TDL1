#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    for(;i<5;){
        printf("hola");
        i++;
    }
    return 0;
    /*
    El for solamente necesita la condicion de corte de control, la declaracion
    e incremento de la variable se pueden hacer exteriormente.
    El orden en el que se cumple el for(i=a;i<b;i+=c) es:
    1ero se realiza la 1era operacion antes de entrar al for
    2do se evalua la 2da condicion para saber si entrar o no, si entra se realiza un loop
    3ero despues de ese loop se hace la 3era operacion y vuelve al paso 2
    */
}
