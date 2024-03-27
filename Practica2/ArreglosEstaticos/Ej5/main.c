#include <stdio.h>
#include <stdlib.h>
#include "../Ej3/print_mat.h"

void sumar_mat(int col,int fil,int A[fil][col],int B[fil][col],int C[fil][col]);
int main()
{
    int col=2;
    int fil=2;
    int A[fil][col];
    int B[fil][col];
    int C[fil][col];
    int i,j;
    for(i=0;i<fil;i++){
        for(j=0;j<col;j++){
            A[i][j]=i+j+1;
            B[i][j]=(i+j+1)*2;
        }
    }
    print_mat(col,fil,A);
    printf("\n");
    print_mat(col,fil,B);
    printf("\n");
    sumar_mat(col,fil,A,B,C);
    print_mat(col,fil,C);
    printf("\n");
    return 0;
}

void sumar_mat(int col,int fil,int A[][col],int B[][col],int C[][col]){
    int i,j;
    for(i=0;i<col;i++){
        for(j=0;j<fil;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
}
