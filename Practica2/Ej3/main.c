#include <stdio.h>
#include <stdlib.h>
#include "print_mat.h"

int col=3;
int fil=4;

void matriz_const(int[][col] ,int );
int main(){
    int a[fil][col] ;
    int i,j,c = 2;
    int aux=1;
    for(i=0;i<fil;i++){
        for(j=0;j<col;j++){
            a[i][j]=aux++;
        }
    }
    print_mat(col,fil,a);
    printf("\n");
    matriz_const(a,c);
    print_mat(col,fil,a);
}

void matriz_const(int a[][col],int c){
    int i,j;
    for(i=0;i<fil;i++){
        for(j=0;j<col;j++){
            a[i][j]*=c;
        }
    }
}


