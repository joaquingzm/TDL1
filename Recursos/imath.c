#include <stdio.h>
#include "imath.h"
int potencia(int x ,int y){
    int i;
    for(i=0;i<y;i++){
        x=x*x;
    }
    return x;
}

int cuadrado(int x){
    return (x*x);
}

int cubo(int x){
    return (x*x*x);
}

int absoluto(int i){
    return (i>=0?i:-i);
}

int factorial(int i){
    if(i==1)return 1;
    else return i*factorial(i-1);
}
int sumatoria(int i){
    if(i==1)return 1;
    else return (i+sumatoria(i-1));
}
int multiplo(int x,int y){
    return (x%y==0?1:0);
}

int divisor(int x,int y){
    return (y%x==0?1:0);
}

int par(int i){
    return(i%2==0?1:0);
}
int impar(int i){
    return(i%2!=0?1:0);
}
