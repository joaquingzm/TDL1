#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("Ingrese número:");
    scanf("%d",&n);
    int max=0,i=0,*p;
    p=calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        p[i]=rand()%40;
        printf("%d - ",p[i]);
        if(p[i]>max)max=p[i];
    }
    free(p);
    printf("Max:%d",max);
    return 0;
}
