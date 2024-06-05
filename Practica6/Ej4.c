#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SQUAREOF(x) (x)*(x)


int main() {
    int xin=3;
    printf("\nxin=%i",xin);
    /*%i sirve para leer decimales y hexadecimales con scanf,
    para el caso de printf es indistinto %i de %d*/
    printf("\nSQUAREOF(xin)=%i", SQUAREOF(xin));
    printf("\nSQUAREOF(xin+4)=%i", SQUAREOF(xin+4));
    printf("\nSQUAREOF(xin+xin)=%i", SQUAREOF(xin+xin));
}
