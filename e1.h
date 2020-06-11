/*
 * Programador: Hernandez Rojas Mara Alexandra Practica 12
 * Este programa define las estructuras de nodo y lista*/
#ifndef E1_H
#define E1_H

//typedef struct _info INFO;

typedef struct _info{
    char nombre[32];
    char apellido[64];
} INFO; //info1,info2, info3;

typedef struct _node NODE;

struct _node{
    INFO info;
    NODE *next;
    NODE *prev;
};

//typedef struct _list LIST;

typedef struct _list {
    NODE *tail;
    NODE *head;
}LIST;


void insertar(INFO info, LIST *l);
LIST *crear_lista();
void eliminar(LIST *l);
void imprimir(LIST *l);

NODE *crear_nodo();
void borrar_nodos(NODE *n);

#endif
//NODE y LIST
