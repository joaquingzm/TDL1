#include <stdio.h>

int main()
{
    int x=2;
    int b1 = 0b11111111; //255
    int b2 = 0b10101010; //170
    int b3 = 0b10101010; //170
    int h = 0x05;
    int b4 = 0b00000101; //5
    b1 &= 0b00000000; //Operador AND transforma b1 a 0
    b2 |= 0b01010101; //Operador OR transforma b2 a 255
    b3 ^= 0b11111111; //Operador XOR transfrma b3 a 85
    if(h==b4) printf("h y b4 son iguales \n");
    b4 = ~b4;
    x +=2;

    int z = 0;
    int *puntero_a_z= &z; //Se usa * para declarar un puntero, & para obtener la direccion de mem
    *puntero_a_z=1;
    printf("z vale %d\n",*puntero_a_z);

    printf("%d\n",b1);
    printf("%d\n",b2);
    printf("%d\n",b3);
    printf("%d\n",b4);
    printf("%d\n",x);
    return 0;
}
/*
Operadores Aritmeticos: +,-,/,* y %
- a++/-- utiliza primero el valor de a para la operacion necesaria y despues incrementa/decrementa a a en uno
- ++/--a incrementa/decrementa primero a a en uno y despues utiliza ese nuevo valor para la operacion necesaria
- !a en el caso de que a sea 0 lo transforma a 1, si no, a 0
- ~a invierte la cadena de bits en CA2, entonces por ej el numero 0101(5) --> 1010(-6)

Operadores Relacionales: <,<=,>,>=,!=,==, &&(AND Logico), || (Or Logico)

Operadores de bits:
- a<<b mueve los bits de a hacia la izquierda una cantidad de veces b
o lo que es lo mismo, a*2^(b).
- a>>b mueve los bits de a hacia la derecha una cantidad de veces b
o lo que es lo mismo, a*2^(-b)
- a & b aplica una operacion AND a nivel de bits entre a y b
- a | b aplica una operacion OR a nivel de bits entre a y b
- a ^ b aplica una operacion XOR a nivel de bits entre a y b


Operadores de asignacion:
- a = b asigna el valor de b a a
- a += b le suma b a a y asigna el resultado a a
- a -= b le suma b a a y asigna el resultado a a
- a *= b multipllica b por a y asigna el resultado a a
- a /= b divide b por a y asigna el resultado a a
- a %= b divide b por a y asigna el resto de esa divison a a
- a &= b aplica una operacion AND a nivel de bits entre a y b, asigna el resultado a a
- a |= b aplica una operacion OR a nivel de bits entre a y b, asigna el resultado a a
- a ^= b aplica una operacion XOR a nivel de bits entre a y b, asigna el resultado a a
- a <<= b mueve los bits de a hacia la izquierda una cantidad de veces b y asigna el resultado a a
- a >>= b mueve los bits de a hacia la derecha una cantidad de veces b y asigna el resultado a a
*/
