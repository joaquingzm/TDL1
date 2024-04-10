#include <stdio.h>
#include <stdlib.h>
struct pun3D{
    float x;
    char y;
    float z;
/*En una estructura el espacio ocupado por cada dato
es del tamaño del dato más grande, entonces en este caso que tengo
2 floats y 1 char, el espacio ocupado es de 12bytes, 8 usados por
los float y 4 asignados al char de los cuales solo usa 1 byte*/
};
int main()
{
    printf("%d\n",sizeof(struct pun3D));
    typedef struct pun3D punto3D;
    printf("%d\n",sizeof(punto3D));
    punto3D v[4];
    printf("%d\n",sizeof(v));
    return 0;
}
