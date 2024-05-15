#include <stdio.h>
#include <stdlib.h>

int calculo_espacio_piramide(int filas);
void reservar_mem_piramide(int **piramide,int filas);
void iniciar_piramide(int *piramide,int filas);
void imprimir_piramide(int *piramide,int filas);

int main(){
    int filas,*piramide=NULL;
    printf("Ingrese cantidad de filas de la piramide:");
    scanf("%d",&filas);
    reservar_mem_piramide(&piramide,filas);
    iniciar_piramide(piramide,filas);
    imprimir_piramide(piramide,filas);
}

/*
Decidí guardar a la pirámide como un arreglo
La sumatoria de n+n-1+n-2...+1 = n(n+1)/2
*/
void reservar_mem_piramide(int **piramide,int filas){
    *piramide=(int*)malloc((filas*(filas+1)/2)*sizeof(int));
}
/*
    La lógica del recorrido es empezar recorriendo por "niveles" la pirámide
(Cantidad de niveles = Cantidad de filas). Empezando por nivel 0 hasta nivel n-1.
Analizando la pirámide es posible darse cuenta que la posición del primer elemento
del siguiente nivel es la sumatoria de la posición del primer elemento de la fila
más el nivel actual (más 1 si el nivel empieza en n=0)

    Por otro lado, en cada nivel n hay n+1 elementos (1er nivel es n=0, si 1er nivel fuera
n=1 entonces habría n elementos en el nivel n). Sabiendo esto y que el 1er elemento
y último elemento de cada nivel tienen que ser 1, recorro ese mismo nivel desde la
posición del 1er elemento (sin incluirla) hasta la anteúltima posición del último
elemento del nivel cargando los datos correspondientes.

    Cómo hago la suma: Analizando la pirámide me dí cuenta que la suma de los
2 elementos de arriba se puede hacer sumando a la posición actual en la pirámide
los 2 elementos de las posiciones posición actual menos nivel actual y posición actual
menos nivel actual - 1, osea:
    piramide[pos_act]=piramide[pos_act-n_act]+piramide[pos_act-n_act-1]
*/
void iniciar_piramide(int *piramide,int filas){
    int i,j,primera_pos_fila=0;
    for(i=0;i<filas;i++){
        *(piramide + primera_pos_fila)=1;
        *(piramide+primera_pos_fila+i)=1;
        for(j=1;j<i;j++){
            *(piramide+primera_pos_fila+j)=*(piramide+primera_pos_fila+j-i)+*(piramide+primera_pos_fila+j-i-1);
        }
        primera_pos_fila=primera_pos_fila+i+1;
    }
}
void imprimir_piramide(int *piramide,int filas){
    int i,j,k,primera_pos_fila=0;
    for(i=0;i<filas;i++){
        for(k=0;k<=filas-i;k++)printf("  ");
        printf("- ");
        for(j=0;j<=i;j++){
            printf("%d - ",*(piramide+primera_pos_fila+j));
        }
        printf("\n");
        primera_pos_fila=primera_pos_fila+i+1;
    }
}
