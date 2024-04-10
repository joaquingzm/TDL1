#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int palo;//0 Basto,1 Copa, 2 Oro,3 Espada,4 Comodin
    int valor;//Comodin->0
}Carta;

typedef struct{
    Carta cartas[50];
}Mazo;
void barajar_mazo(Mazo *m);
Carta devolver_carta(Mazo *m);
void imprimir_carta(Carta *c);
int main()
{

    return 0;
}
void inicializar_mazo_ordenado(Mazo *m){
    int i=0,j=0,k=0;
    Carta aux;
    aux.palo=4;
    aux.valor=0;
    for(;i<4;i++){
        for(;j<12,j++){

        }
    }
}
void barajar_mazo(Mazo *m){
    srand(time(NULL));
    Carta aux;
    int i,a,b;
    m->cartas[0]=aux;
    m->cartas[1]=aux;
    for(i=0;i<50;i++){
        a=rand()%50;
        b=rand()%50;
        aux=m->cartas[a];
        m->cartas[a]=m->cartas[b];
        m->cartas[b]=aux;
    }
}
Carta devolver_carta(Mazo *m){
    srand(time(NULL));
    int i = rand()%50;
    return m->cartas[i];
}
void imprimir_carta(Carta *c){
    switch(c->palo){
    case 0 : printf("Carta:%d de Basto ",c->valor);
    case 1 : printf("Carta:%d de Copa ",c->valor);
    case 2 : printf("Carta:%d de Oro ",c->valor);
    case 3 : printf("Carta:%d de Espada ",c->valor);
    case 4 : printf("Carta: Comodín ");
    }
}
