#include <stdio.h>
#include <stdlib.h>
typedef enum { IZQUIERDA, CENTRO_H, DERECHA } AlineacionHorizontal;
typedef enum { ARRIBA=1, CENTRO_V, ABAJO } AlineacionVertical;
typedef enum { DOS=2, CERO=0, UNO, MENOS_UNO=-1, OTRO } Numeros;
typedef enum { LET_A = 'A', LET_B, LET_Z = 'Z' } Letras;
typedef enum { LETRA_A = 'A', LETRA_B, LETRA_Z = 'Z' } Letras2;
int main()
{
    AlineacionHorizontal ah;
    printf("%d %d %d\n",IZQUIERDA,CENTRO_H,DERECHA);

    AlineacionVertical av;
    printf("%d %d %d\n",ARRIBA ,CENTRO_V,ABAJO);

    Numeros n;
    printf("%d %d %d %d %d\n",DOS,CERO,UNO,MENOS_UNO,OTRO);

    Letras l;
    printf("%d %d %d\n",LET_A,LET_B,LET_Z);

    Letras2 l2;
    printf("%d %d %d\n",LETRA_A,LETRA_B,LETRA_Z);
    printf("Hello world!\n");
    return 0;
}
