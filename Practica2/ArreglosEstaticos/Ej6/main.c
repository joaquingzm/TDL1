#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[10]={0};
    int i,x;
    printf("Ingrese num:");
    scanf("%d",&x);
    printf(" Num ingresado\n");
    while(x/10!=0){
        nums[x%10]++;
        x/=10;
    }
    nums[x]++;
    printf("Fin while:\n");
    for(i=0;i<10;i++){
        printf("%d\n",nums[i]);
    }
    return 0;
}
