#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int p1[2];
    int p2[2];
}rectangulo1;
typedef struct{
    int p[2];
    int ancho_alto[2];
}rectangulo2;
typedef struct{
    int info[4];
}rectangulo3;
typedef union{
    rectangulo1 r1;
    rectangulo2 r2;
    rectangulo3 r3;
}union_;
typedef union{
    double y;
    int x;

}prueba;
int main()
{
    union_ u;
    u.r1.p1[0]=2;
    u.r1.p1[1]=3;
    u.r1.p2[0]=4;
    u.r1.p2[1]=5;
    u.r2.p[0]=0;
    printf("Esquina x1:%d\n",u.r1.p1[0]);
    printf("Esquina y1:%d\n",u.r1.p1[1]);
    printf("Esquina x2:%d\n",u.r1.p2[0]);
    printf("Esquina y2:%d\n",u.r1.p2[1]);
    prueba p;
    p.x=2;
    p.y=3;
    printf("%d\n",p.x);
    printf("%f\n",p.y);
    return 0;
}
