#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float raiz_cuadrada(float a)
    {
        float xp,x,xant;
        xp=a;
        x=xp+(a-xp*xp)/(2*xp);

        while(((x-xp)>0.0001)||((x-xp)<-0.0001))
        {
            xant=xp;
            xp=x;
            x=xp+(a-xp*xp)/(2*xp);

        }
        printf("Valor final:%f\n",x);
        printf("Valor anterior xp:%f\n",xp);
        printf("Valor anterior xant:%f\n",xant);
        return x;
    }
    printf("%f\n",pow(3,2));
    printf("%f\n",sqrt(2));
    float r1,r2;
    r1 = raiz_cuadrada(2);
    r2 = sqrt(2);
    if(r1==r2)printf("Son iguales\n");
    return 0;
}
