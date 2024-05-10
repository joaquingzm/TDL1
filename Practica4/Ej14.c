#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void reservar_mem_matriz_triangular(int **mat,int n);
void inicializar_matriz_triangular(int *mat,int n);
void imprimir_matriz_triangular(int *mat,int n);
void liberar_mem_matriz_triangular(int **mat,int n);

int main(){
    int *matriz_triangular;
    int lado;
    printf("Ingrese tamaño del lado:");
    scanf("%d",&lado);
    reservar_mem_matriz_triangular(&matriz_triangular,lado);
    inicializar_matriz_triangular(matriz_triangular,lado);
    imprimir_matriz_triangular(matriz_triangular,lado);
    liberar_mem_matriz_triangular(&matriz_triangular,lado);
}
void reservar_mem_matriz_triangular(int **mat,int n){
    int i,aux=0;
    for(i=0;i<=n;i++)aux+=i;
    *mat=(int*)malloc(aux*sizeof(int));
}
void inicializar_matriz_triangular(int *mat,int n){
    int i,aux=0;
    srand(time(NULL));
    for(i=0;i<=n;i++)aux+=i;
    for(i=0;i<aux;i++){
        mat[i]=rand()%20 +1;
    }
}
void imprimir_matriz_triangular(int *mat,int n){
    int i,j,cont=0;
    printf("- ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j){
                printf("%d - ",*(mat+cont));
                cont++;
            }
            else printf("0 - ");
        }
        printf("\n- ");
    }
}
void liberar_mem_matriz_triangular(int **mat,int n){
    free(*mat);
    *mat=NULL;
}
