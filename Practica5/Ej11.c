#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr = fopen("Recursos/Ej9WR.dat","rb");
    fseek(ptr,0,SEEK_END);
    printf("El archivo de 1 jugador ocupa %ld",ftell(ptr));
}
