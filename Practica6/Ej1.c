#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]) {
    printf("\nargc = %d",argc);
    int i;
    for(i=0;i<=argc;i++){
        printf("\nargv[%d] => %s\n",i,argv[i]);
    }
    return 0;
}
