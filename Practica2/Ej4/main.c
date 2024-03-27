#include <stdio.h>
#include <stdlib.h>
#include "imprimir_mat_transpuesta.h"
#include "imprimir_mat_transpuesta.c"
#include "print_mat.h"
#include "print_mat.c"

int main(){

    int col=4;
    int fil=3;
    int a[fil][col];
    int i,j;
    int aux=1;
    for(i=0;i<fil;i++){
        for(j=0;j<col;j++){
            a[i][j]=aux++;
        }
    }
    print_mat(col,fil,a);
    printf("hola\n");
    imprimir_mat_transpuesta(col,fil,a);
    printf("\n");
    return 0;
}




