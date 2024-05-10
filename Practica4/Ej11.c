#include <stdio.h>
#include <stdlib.h>
void reservar_mem_matriz (int ***matriz,int c,int f);
void inicializar_matriz(int **matriz,int c,int f);
void imprimir_matriz(int **matriz,int c,int f);
void imprimir_pos_valores_matriz_multiplo(int **matriz,int c,int f,int num);
void liberar_mem_matriz(int ***matriz,int f);
int main(){
    int c,f,num;
    printf("Ingrese cantidad de columnas:");
    scanf("%d",&c);
    printf("Ingrese cantidad de filas:");
    scanf("%d",&f);
    int ** matriz;
    reservar_mem_matriz(&matriz,c,f);
    inicializar_matriz(matriz,c,f);
    imprimir_matriz(matriz,c,f);
    printf("Ingrese numero del cual imprimir sus multiplos:");
    scanf("%d",&num);
    imprimir_pos_valores_matriz_multiplo(matriz,c,f,num);
    liberar_mem_matriz(&matriz,f);
}
void reservar_mem_matriz (int ***matriz,int c,int f){
    (*matriz)=(int**)calloc(f,sizeof(int*));
    int i;
    for(i=0;i<f;i++){
        (*matriz)[i]=(int*)calloc(c,sizeof(int));
    }
} 
void inicializar_matriz(int **matriz,int c,int f){
    int i,j;
    for(i=0;i<f;i++){
        printf("Fila %d:\n",i);
        for(j=0;j<c;j++){
            printf("Columna %d:",j);
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }
}
void imprimir_matriz(int **matriz,int c,int f){
    int i,j;
    for(i=0;i<f;i++){
        printf("- ");
        for(j=0;j<c;j++){
            printf("%d - ",matriz[i][j]);
        }
        printf("\n");
    }
}
void imprimir_pos_valores_matriz_multiplo(int **matriz,int c,int f,int num){
    int i,j;
    for(i=0;i<f;i++){
        printf("- ");
        for(j=0;j<c;j++){
            if(matriz[i][j]%num==0)printf("%d[%d][%d] - ",matriz[i][j],i,j);
        }
    }
}
void liberar_mem_matriz(int ***matriz,int f){
    int i;
    for(i=0;i<f;i++){
        free((*matriz)[i]);
    }
}