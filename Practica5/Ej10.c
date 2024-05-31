#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char apellido[20];
    char nombre[20];
    int edad;
    int titulos;
    int ranking;
    double fortuna;
}jugadorTenis;

void imprimirJugador(jugadorTenis );
int actualizarRankingJugador(char [20],char [20],int ,FILE *);
void imprimirArchivoJugadores(FILE *);


int main(){
    FILE *ptrRW=fopen("Recursos/Ej9WR (copia).dat","r+b");
    if(ptrRW!=NULL){
        imprimirArchivoJugadores(ptrRW);
        if(actualizarRankingJugador("Joaquín","Guzmán",4,ptrRW))printf("\n\nSí\n\n");
        imprimirArchivoJugadores(ptrRW);
        fclose(ptrRW);
    }
}

int actualizarRankingJugador(char nombre[20],char apellido[20],int nuevoRanking,FILE *ptrRW){
    jugadorTenis aux;
    fread(&aux,sizeof(jugadorTenis),1,ptrRW);
    while(!feof(ptrRW)){
        if((strcmp(aux.apellido,apellido)==0)&&(strcmp(aux.nombre,nombre)==0)){
            aux.ranking=nuevoRanking;
            fseek(ptrRW,-sizeof(jugadorTenis),SEEK_CUR);
            fwrite(&aux,sizeof(jugadorTenis),1,ptrRW);
            fseek(ptrRW,SEEK_SET,0);
            return 1;
        }
        fread(&aux,sizeof(jugadorTenis),1,ptrRW);
    }
    fseek(ptrRW,SEEK_SET,0);
    return 0;
}

void imprimirJugador(jugadorTenis jugador){
    printf("Apellido: %s\n",jugador.apellido);
    printf("Nombre:   %s\n",jugador.nombre);
    printf("Edad:     %d\n",jugador.edad);
    printf("Titulos:  %d\n",jugador.titulos);
    printf("Ranking:  %d\n",jugador.ranking);
    printf("Fortuna:  %.2lf\n",jugador.fortuna);
}

void imprimirArchivoJugadores(FILE *ptrWR){
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
