/*
 * Programador: Hernandez Rojas Mara Alexandra Practica 12
 * Este programa define las estructuras de nodo y lista*/

#include <stdio.h>
#include<string.h>
#include "e1.h"

int main(){
    LIST *lista;
    INFO info1, info2, info3;
    
    lista = crear_lista();

    strcpy(info1.nombre, "Juan");
    strcpy(info1.apellido, "Perez");
    insertar(info1, lista);
    //imprimir(lista);

    strcpy(info2.nombre, "Margarita");
    strcpy(info2.apellido, "Lopez");
    insertar(info2, lista);
    //imprimir(lista);

    strcpy(info3.nombre, "Laura");
    strcpy(info3.apellido, "Martinez");
    insertar(info3, lista);
    //imprimir(lista);
    
    imprimir(lista);
    eliminar(lista);
    
    return 0;

}
 
