#include <stdio.h>
#include <stdlib.h>
#define DEBUG 0
/*
Lo que hace #if DEBUG es que si yo en precompilación pongo
el valor en 1 se va a añadir al programa una parte del código
que sirve para hacer debug.
d) Si se utiliza ifdef no depende del valor de DEBUG si no de que
esté definido
*/

int main(){
    int x= 15;
    while (x<50){
        #ifdef DEBUG
        printf("x= %d\n", x);
        #endif
        x++;
    }
    return 0;
}
