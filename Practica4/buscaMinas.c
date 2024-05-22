#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Para el mapa:
mapa[i][j]<=10 -> Cantidad de bombas alrededor
mapa[i][j]=10 -> Bomba
*/

typedef enum{BOMBA=10,MOSTRAR=1,NO_MOSTRAR=0,GANO=1,PERDIO=0,JUGANDO=2,OCULTO_CHAR='#',BOMBA_CHAR='@',DIM_COL=8,DIM_FIL=8,CANT_BOMBAS=10};

char caracteres[]={'0','1','2','3','4','5','6','7','8','9',BOMBA_CHAR};

typedef struct{
    int marcado : 1;
    int revelar : 1;
    int valor;
}casilla;

typedef struct{
    casilla **mapa;
    int bombas;
    int filas;
    int columnas;
    int estado;

}partida;
void jugar_partida(partida *,int ,int ,int );
void realizar_jugada(partida *,int ,int ,int ,int );
void ingresar_datos(int *,int *,int ,int );
void reservar_mem(casilla ***,int ,int );
void mostrar_mapa(casilla **,int ,int );
void inicializar_partida(partida *,int ,int ,int );
void inicializar_mapa(casilla **,int ,int ,int );


int main(){
    int columnas=DIM_COL;
    int filas=DIM_FIL;
    int bombas=CANT_BOMBAS;
    partida p;
    inicializar_partida(&p,columnas,filas,bombas);
    jugar_partida(&p,columnas,filas,bombas);

}

void jugar_partida(partida *p,int columnas,int filas,int bombas){
    int f,c;
    printf("JUGANDO: \n\n");
    mostrar_mapa(p->mapa,columnas,filas);
    ingresar_datos(&c,&f,columnas,filas);
    printf("\n\n");
    while(p->estado==JUGANDO){
        realizar_jugada(p,columnas,filas,c,f);
        if(p->estado==PERDIO)break;
        printf("JUGANDO: \n\n");
        mostrar_mapa(p->mapa,columnas,filas);
        ingresar_datos(&c,&f,columnas,filas);
        printf("\n\n");
    }
    mostrar_mapa(p->mapa,columnas,filas);
    if(p->estado==PERDIO)printf("PERDISTE :(");
    else printf("GANASTE!");
}

void ingresar_datos(int *c,int *f,int columnas,int filas){
    printf("Elija fila:");
    scanf("%d",f);
    printf("Elija columna:");
    scanf("%d",c);
    while(*f<0||*f>=filas||*c<0||*c>=columnas){
        printf("\n Por favor ingresar una posición válida\n\n");
        printf("Elija fila:");
        scanf("%d",f);
        printf("Elija columna:");
        scanf("%d",c);
    }
}

void inicializar_partida(partida *p,int columnas,int filas,int bombas){
    reservar_mem(&(p->mapa),columnas,filas);
    inicializar_mapa(p->mapa,columnas,filas,bombas);
    p->estado=JUGANDO;
}

void reservar_mem(casilla ***mapa,int columnas,int filas){
    *mapa=(casilla**)calloc(filas,sizeof(casilla*));
    int i,j;
    for(i=0;i<filas;i++){
        *(*mapa+i)=(casilla*)calloc(columnas,sizeof(casilla));
        for(j=0;j<columnas;j++){
            (*mapa)[i][j].valor=0;
            (*mapa)[i][j].revelar=NO_MOSTRAR;
        }
    }
}

void inicializar_mapa(casilla **mapa,int columnas,int filas,int bombas){
    srand(2);
    int b=0,j,i,aux_fila,aux_col;
    for(;b<bombas;b++){

        aux_fila=rand()%filas;
        aux_col=rand()%columnas;
        mapa[aux_fila][aux_col].valor=BOMBA;

        for(i=aux_fila-1;i<=aux_fila+1;i++){
            if(i>=0&&i<filas){
                for(j=aux_col-1;j<=aux_col+1;j++){
                    if(j>=0&&j<columnas){
                        mapa[i][j].revelar=NO_MOSTRAR;
                        if(mapa[i][j].valor!=BOMBA){
                            mapa[i][j].valor++;
                        }
                    }
                }
            }
        }
    }
}

void realizar_jugada_0(partida *p,int columnas,int filas,int c,int f){
   int i,j;
        for(i=f-1;i<=f+1;i++){
            if(i>=0&&i<filas){
                for(j=c-1;j<=c+1;j++){
                    if(j>=0&&j<columnas){

                        if(p->mapa[i][j].revelar==NO_MOSTRAR){
                            p->mapa[i][j].revelar=MOSTRAR;
                            if ((j!=c||i!=f)&&p->mapa[i][j].valor==0){
                                realizar_jugada_0(p,columnas,filas,j,i);
                            }
                        }

                    }
                }
            }
        } 
}

void realizar_jugada(partida *p,int columnas,int filas,int c,int f){
    switch(p->mapa[f][c].valor){
        case 0 : {
            realizar_jugada_0(p,columnas,filas,c,f);
            break;
        }
        case BOMBA : {
            p->estado=PERDIO;
            p->mapa[f][c].revelar=MOSTRAR;
            break;
        }
        default : {
            p->mapa[f][c].revelar=MOSTRAR;
            break;
        }
    }
}


void mostrar_mapa(casilla **mapa,int columnas,int filas){
    int i,j;
    printf("   ");
    for(j=0;j<columnas;j++){
        printf("  %d ",j);
    }
    printf("\n\n");
    for(i=0;i<filas;i++){
        printf("%d  - ",i);
        for(j=0;j<columnas;j++){
            if(mapa[i][j].revelar){
                printf("%c - ",caracteres[mapa[i][j].valor]);
            }
            else{
                printf("# - ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
