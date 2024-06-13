#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[]){
    if(argc<5){
        printf("Cantidad de argumentos pasada no válida\n");
        return -1;
    }
    else{
        int i;
        int prom=0;
        for(i=1;i<argc;i++){
            prom+=atoi(argv[i]);
        }
        printf("Promedio: %.2f\n",(float)prom/(argc-1));
        return 0;
    }
}