#include <stdio.h>

int main(){
 char a, b,c;
 printf("Ingrese el primer caracter:\n");
 scanf("%c", &a);
 //scanf("%c",&c);
 printf("Se leyó el caracter: %c\n", a);
 printf("Ingrese el segundo caracter:\n");
 scanf(" %c", &b);
 //scanf("%c",&c);
 printf("Se leyó el caracter: %c\n", b);
 printf("Imprimo enter como char y como ASCII: char=%c , ASCII=%d",c,c);
 return 0;
}

/*
Problema: El scanf leia el char pero el char de enter lo leia el proximo
Solucion: Agregar un scan para el enter
Solucion 2: Poner un espacio antes de leer el proximo char elimina espacios y enter
*/
