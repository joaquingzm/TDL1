#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    if(argc<=1){
        printf("Error\n");
        return 0;
    }
    int i;
    for(i=1;i<argc;i++){
        printf("%s ",argv[i]);
    }
    printf("\n");
}