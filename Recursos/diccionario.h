#ifndef _DICCIONARIO_H_INCLUDED
#define _DICCIONARIO_H_INCLUDED

typedef struct _nodo{
    struct _nodo *HI;
    struct _nodo *HD;
    char *data;
}nodo;

typedef nodo* Diccionario;



#endif
