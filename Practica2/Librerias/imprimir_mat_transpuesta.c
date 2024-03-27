#include "imprimir_mat_transpuesta.h"
#include "print_mat.h"
void imprimir_mat_transpuesta(int col,int fil,int a[fil][col]){
    int colT=fil,filT=col;
    int aux[col][fil];
    int i,j;
    for(i=0;i<col;i++){
        for(j=0;j<fil;j++){
            aux[i][j]=a[j][i];
        }
    }
    print_mat(colT,filT,aux);
}
