
//2. Analice, compile y ejecute el siguiente código. Indique imprime y por qué.
#include <stdio.h>
#include <stdlib.h>
void f (int * p);
int main(){
    int * ptr = NULL;
    f(ptr);
    if (ptr == NULL)
        printf("ptr es NULL\n");
    else
        printf("ptr no es NULL\n");
    return 0;
}
void f (int * p) {
    p = (int *) realloc(p,10*sizeof(int));
    if(p==NULL)printf("null");
}
