#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char calle[50];
    char ciudad[50];
    int codigo_postal;
    char pais[40];
}direccion;
typedef struct{
    char apellido[50];
    char nombre[50];
    char legajo[8];
    float promedio;
    direccion dir;
}alumno;
void imprimir_alumno(alumno *a);
void inicializar_alumno(alumno *a);
int main()
{
    alumno a;
    inicializar_alumno(&a);
    imprimir_alumno(&a);
    return 0;
}
void inicializar_alumno(alumno *a){
    direccion d;
    printf("Calle: ");
    scanf(" %s",d.calle);
    printf("Ciudad: ");
    scanf(" %s",d.ciudad);
    printf("Codigo postal: ");
    scanf(" %d",&d.codigo_postal);
    printf("Pais: ");
    scanf(" %s",d.pais);
    (*a).dir=d;
    printf("Apellido: ");
    scanf(" %s",(a->apellido));
    printf("Nombre: ");
    scanf(" %s",(a->nombre));
    printf("Legajo: ");
    scanf(" %s",(a->legajo));
    printf("Promedio: ");
    scanf(" %f",&(a->promedio));
}
void imprimir_alumno(alumno *a){
    printf("Calle:%s\n ",a->dir.calle);
    printf("Ciudad:%s\n ",a->dir.ciudad);
    printf("Codigo postal:%d\n ",a->dir.codigo_postal);
    printf("Pais:%s\n ",a->dir.pais);
    printf("Apellido:%s\n ",a->apellido);
    printf("Nombre:%s\n ",a->nombre);
    printf("Legajo:%s\n ",a->legajo);
    printf("Promedio:%f\n ",a->promedio);

}
