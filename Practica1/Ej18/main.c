#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
        printf("%d\n",rand());
    }

    return 0;
}
