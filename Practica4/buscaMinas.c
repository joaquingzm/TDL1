#include <stdio.h>
/*
Para el mapa:
mapa[i][j]>=0 -> Cantidad de bombas alrededor
mapa[i][j]=-1 -> Bomba
mapa[
*/
enum{'0','1','2','3','4','5','6','7','8','9','δ'=-1};
typedef struct{
    int revelar : 1;
    int valor;
}casilla;
int main(){
    int base=8;
    int alto=8;
    int bombas=10;
    casilla mapa[alto][base]={0};
    inicializar_mapa(mapa,base,alto,bombas);
}

void inicializar_mapa(casilla *mapa,int base,int alto,int bombas){
    srand(2);
    int b=0,j,i,aux_fila,aux_col;
    for(;b<bombas;b++){
        aux_fila=rand()%alto;
        aux_col=rand()%base;
        mapa[aux_fila][aux_col];
        for(i=-1;i<aux_fila;i++){
            for(j=-1;j<aux_col;j++){
                if(j==0&&i=0)mapa[i+aux_fila][j+aux_col]=-1;
                else{
                    mapa[i+aux_fila][j+aux_col]++;

                }
            }
        }
    }
}
