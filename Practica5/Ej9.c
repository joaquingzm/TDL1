#include <stdlib.h>
#include <stdio.h>

#define DIM 1

typedef struct{
    char apellido[20];
    char nombre[20];
    int edad;
    int titulos;
    int ranking;
    double fortuna;
}jugadorTenis;

void ingresarJugadores(jugadorTenis [DIM]);
void imprimirJugador(jugadorTenis );
void almacenarJugadores(FILE *,jugadorTenis [DIM]);
void procesarArchivoJugadores(FILE *);


int main(){
    FILE *ptrWR = fopen("Recursos/Ej9WR.dat","w+b");
    if(ptrWR!=NULL){
        jugadorTenis jugadores[DIM];
        ingresarJugadores(jugadores);
        almacenarJugadores(ptrWR,jugadores);
        procesarArchivoJugadores(ptrWR);
        fclose(ptrWR);
    }
    return 0;
}

void ingresarJugadores(jugadorTenis jugadores[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("       Jugador %d\n\n",i+1);
        printf("Apellido: ");
        scanf("%s",(jugadores+i)->apellido);
        printf("Nombre:   ");
        scanf("%s",(jugadores+i)->nombre);
        printf("Edad:     ");
        scanf("%d",&((jugadores+i)->edad));
        printf("Titulos:  ");
        scanf("%d",&((jugadores+i)->titulos));
        printf("Ranking:  ");
        scanf("%d",&((jugadores+i)->ranking));
        printf("Fortuna:  ");
        scanf("%lf",&((jugadores+i)->fortuna));
        printf("\n\n");
    }
}

void imprimirJugador(jugadorTenis jugador){
    printf("Apellido: %s\n",jugador.apellido);
    printf("Nombre:   %s\n",jugador.nombre);
    printf("Edad:     %d\n",jugador.edad);
    printf("Titulos:  %d\n",jugador.titulos);
    printf("Ranking:  %d\n",jugador.ranking);
    printf("Fortuna:  %.2lf\n",jugador.fortuna);
}
void almacenarJugadores(FILE *ptrWR,jugadorTenis jugadores[DIM]){
    fwrite(jugadores,sizeof(jugadorTenis),DIM,ptrWR);
    fseek(ptrWR,SEEK_SET,0);
}

void procesarArchivoJugadores(FILE *ptrWR){
    int i=0;
    jugadorTenis aux;
    fread(&aux,sizeof(jugadorTenis),1,ptrWR);
    while(!feof(ptrWR)){
        printf("       Jugador %d\n\n",i+1);
        imprimirJugador(aux);
        i++;
        fread(&aux,sizeof(jugadorTenis),1,ptrWR);
    }
    fseek(ptrWR,SEEK_SET,0);
}
