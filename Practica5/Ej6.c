#include <stdio.h>
#include <stdlib.h>

//%[^';'],aux para leer cadena en la primera fila incluyendo espacios hasta encontrarme con ';'

int main(){
    FILE *ptr;
    char *categorias=NULL;
    levantarCategorias(ptr,&categorias);
    levantarDataCSV(ptr);
}
