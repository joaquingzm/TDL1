#include <stdio.h>
#include <stdlib.h>

int main()
{

    int func(){
        static int x=-2;
        return x+=2;
    }
    int i;
    for(i=0;i<5;i++){
        printf("%d",func());
    }
    return 0;
}
