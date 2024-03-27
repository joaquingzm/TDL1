#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matr[5][4];

    int (*p)[5][4];
    p=&matr;
    int i,j;
    printf("%p\n",&matr);
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("- %p ",&matr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            matr[i][j]=i;
        }
    }
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("- %d ",matr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("- %d ",*(*(*(p+i)+j)));
        }
        printf("\n");
    }
    return 0;
}
