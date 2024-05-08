#include <stdio.h>
#include <stdlib.h>

typedef struct tipo_direccion{
        char calle[50];
        char ciudad[30];
        int cod_postal;
        char pais[40];
    }direccion;

typedef struct alu{
        char apellido[50];
        char nombre[50];
        char legajo[8];
        float promedio;
        direccion domicilio;
    }alumno;

void inicializarDireccion();
void inicializarAlumno();

int main()
{
    int dim=3;
    alumno Alumnos[dim],*ptrAlumnos;
    ptrAlumnos=Alumnos;

    struct promedio{
        char *apellido;
        char *nombre;
        float maxProm;
    }prom;
    prom.maxProm=0;
    int i;
    for (i=0;i<dim;i++){
        inicializarAlumno(ptrAlumnos+i);
        if ((*(ptrAlumnos+i)).promedio>prom.maxProm){
//            prom.maxProm=(*(ptrAlumnos+i)).promedio;
//            prom.apellido=(*(ptrAlumnos+i)).apellido;
//            prom.nombre=(*(ptrAlumnos+i)).nombre;
            prom.maxProm = (ptrAlumnos+i)->promedio;
            prom.apellido = (ptrAlumnos+i)->apellido;
            prom.nombre = (ptrAlumnos+i)->nombre;
        }
    }
    printf("El Alumno con Mayor Promedio fue: \n");
    printf("%s %s con un promedio de= %f \n",prom.apellido,prom.nombre,prom.maxProm);
    return 0;
}
void inicializarDireccion(direccion *Dire){
    printf("Ingrese la calle del alumno \n");
    scanf(" %s",(*Dire).calle);
    printf("Ingrese la ciudad del alumno \n");
    scanf(" %s",(*Dire).ciudad);
    printf("Ingrese el codigo postal del alumno \n");
    scanf("%d",&(*Dire).cod_postal);
    printf("Ingrese el pais del alumno \n");
    scanf(" %s",(*Dire).pais);
}

void inicializarAlumno(alumno *Al){
    printf("Ingrese el apellido del alumno \n");
    scanf(" %s",(*Al).apellido);
    printf("Ingrese el nombre del alumno \n");
    scanf(" %s",(*Al).nombre);
    printf("Ingrese el legajo del alumno \n");
    scanf(" %s",(*Al).legajo);
    printf("Ingrese el promedio del alumno \n");
    scanf("%f",&(*Al).promedio);
    inicializarDireccion(&(*Al).domicilio);
}
