#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int dia : 8;
    int mes : 8;
    int ano : 16;
}_fecha;
typedef union{
    _fecha f;
    int cmp;
}fecha;

typedef struct{
    char dia ;
    char mes ;
    short int ano ;
}_fecha2;
typedef union{
    _fecha2 f;
    int cmp;
}fecha2;
int main()
{
    fecha f1={{12,10,2025}};
    fecha f2={{12,10,2025}};
    if(f1.cmp==f2.cmp)printf("si\n");
    fecha2 f1_2={{12,10,2025}};
    fecha2 f2_2={{12,10,2025}};
    if(f1_2.cmp==f2_2.cmp)printf("si\n");
    printf("%0x %0x\n",f1_2.cmp,f2_2.cmp);
    int i;
    printf("%0x\n",f1_2.f.dia);
    printf("%0x\n",f1_2.f.mes);
    printf("%0x\n",f1_2.f.ano);
    printf("%0x\n",f2_2.f.dia);
    printf("%0x\n",f2_2.f.mes);
    printf("%0x\n",f2_2.f.ano);
    return 0;
}
