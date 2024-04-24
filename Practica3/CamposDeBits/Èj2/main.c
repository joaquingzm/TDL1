#include <stdio.h>
#include <stdlib.h>
typedef struct{
    unsigned int r : 5;
    unsigned int g : 6;
    unsigned int b : 5;
}RGB16;
typedef struct{
    unsigned int r : 8;
    unsigned int g : 8;
    unsigned int b : 8;
}RGB24;
int main()
{
    printf("Hello world!\n");
    return 0;
}
RGB24 convertir16_24(RGB16 pixel){
    RGB24 aux = {pixel.r,pixel.g,pixel.r};
    return aux;
}
RGB16
