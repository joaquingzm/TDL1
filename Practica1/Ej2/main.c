#include <stdio.h>
int main(){
char c= 'a';
int x= 64;
printf("char c= %c\n", x);
printf("int x= %d\n", c);

float X= 3147473648;
double Y= 3147473648;
double Z;
Z=X;
printf("float x= %f\n",X);
printf("double Y= %lf\n", Y);
printf("double Z=%lf\n",Z);
printf("X vale %f ocupa %d\n",X,sizeof(X));
return 0;
}



/*
Respuestas:
a) No da warnings, el programa simplemente interpreta un int cómo número de la tabla ascii para los caracteres
b) Un double cuenta con el doble de bytes para representar un número con mayor presición, por lo que puede representar
el doble de números que un float o ser más preciso con los decimales
c) Se realiza de izquierda a derecha
d) El operador sizeof sirve para conocer cuanto ocupa
*/
