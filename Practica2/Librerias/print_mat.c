#include "print_mat.h"
//extern int fil;
void print_mat(int col,int fil,int a[][col]){
    int j,i;
    for(i=0;i<fil;i++){
        for(j=0;j<col;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}


