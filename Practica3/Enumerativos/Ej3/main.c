#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef enum{Bluetooth=0b10000000,Wifi=0b1000000,GPS=0b100000,Datos=0b10000,Frontal=0b1000,Trasera=0b100,Linterna=0b10,Vibrar=0b1}telefono;
void estado(char e);
void activar(char *e);
void desactivar(char *e);
void invertir(char *e);
int main()
{
    char estado1={0b11111111};
    char estado2={0b0};
    printf("Estado1\n");
    estado(estado1);
    printf("Estado2\n");
    estado(estado2);
    activar(&estado2);
    printf("Estado2\n");
    estado(estado2);
    desactivar(&estado1);
    printf("Estado1\n");
    estado(estado1);
    invertir(&estado1);
    printf("Estado1\n");
    estado(estado1);
    printf("Estado2\n");
    estado(estado2);
    return 0;
}
void activar(char *e){
    int d;
    printf("Elegir dispotivo a activar(Bluetooth 7,Wifi 6,GPS 5,Datos 4,Frontal 3,Trasera 2,Linterna 1,Vibrar 0):");
    scanf("%d",&d);
    *e |= 1<<d;
}
void desactivar(char *e){
    int d;
    printf("Elegir dispotivo a desactivar(Bluetooth 7,Wifi 6,GPS 5,Datos 4,Frontal 3,Trasera 2,Linterna 1,Vibrar 0):");
    scanf("%d",&d);
    *e &= ~(1<<d);
}
void invertir(char *e){
    int d;
    printf("Elegir dispotivo a invertir(Bluetooth 7,Wifi 6,GPS 5,Datos 4,Frontal 3,Trasera 2,Linterna 1,Vibrar 0):");
    scanf("%d",&d);
    *e ^= 1<<d;
}
void estado(char e){
    printf("Estado:");
    int i;
    int dim = 8;
    unsigned int aux = e;
    int a[dim];
    for(i=0;i<dim;i++){
        a[dim-1-i]=aux%2;
        aux=aux/2;
    }
    for(i=0;i<dim;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}
