#include "promediominmax.h"

float promedio_arreglo(float a[],int diml){
    int i;
    float aux=0;
    for(i=0;i<diml;i++){
        aux+=a[i];
    }
    return (aux/diml);
}

float min_arreglo(float a[],int diml){
    int i;
    float min=99999;
    for(i=0;i<diml;i++){
        if(a[i]<min)min=a[i];
    }
    return min;
}

float max_arreglo(float a[],int diml){
    int i;
    float max=-99999;
    for(i=0;i<diml;i++){
        if(a[i]>max)max=a[i];
    }
    return max;
}
