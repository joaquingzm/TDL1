#include "sumar_mat.h"

void sumar_mat(int col,int fil,int A[][col],int C[][col],int C[][col]){
    int i,j;
    for(i=0;i<col;i++){
        for(j=0;j<fil;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
}
