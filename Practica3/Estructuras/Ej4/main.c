#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int palo;//0 Basto,1 Copa, 2 Oro,3 Espada,4 Comodin
    int valor;//Comodin->0
}Carta;

typedef struct{
    Carta cartas[50];
}Mazo;
void inicializar_mazo_ordenado(Mazo *m);
void barajar_mazo(Mazo *m);
Carta devolver_carta(Mazo *m);
void imprimir_carta(Carta *c);
int main()
{
    Mazo mazo;
    inicializar_mazo_ordenado(&mazo);
    int i;
    for(i=0;i<50;i++){
        printf("%d-",i+1);
        imprimir_carta(&mazo.cartas[i]);
    }
    printf("\n");
    barajar_mazo(&mazo);
    for(i=0;i<50;i++){
        printf("%d-",i+1);
        imprimir_carta(&mazo.cartas[i]);
    }

    return 0;
}
void inicializar_mazo_ordenado(Mazo *m){
    int i,j,k=2;
    m->cartas[0].palo=4;
    m->cartas[0].valor=0;
    m->cartas[1].palo=4;
    m->cartas[1].valor=0;
    for(i=0;i<4;i++){
        for(j=1;j<=12;j++){
           m->cartas[k].palo=i;
           m->cartas[k].valor=j;
           k++;
        }
    }
}
void barajar_mazo(Mazo *m){
    srand(time(NULL));
    Carta aux;
    int i,a,b;
    for(i=0;i<25;i++){
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
    case 0 : printf("Carta:%d de Basto\n",c->valor);break;
    case 1 : printf("Carta:%d de Copa\n",c->valor);break;
    case 2 : printf("Carta:%d de Oro\n",c->valor);break;
    case 3 : printf("Carta:%d de Espada\n",c->valor);break;
    case 4 : printf("Carta: Comodin\n");break;
    }
}
