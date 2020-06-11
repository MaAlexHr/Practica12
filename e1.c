/*
 * Programador: Hernandez Rojas Mara Alexandra Practica 12
 * Este programa define las estructuras de nodo y lista*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "e1.h"

void insertar(INFO info, LIST *l){
    if(l!=NULL){
        if(l->head == NULL){
            l->head = crear_nodo();
            l->head->info = info;
            return;
        }else{
        	NODE *nuevo = crear_nodo();
        	//strcpy(nuevo->info.nombre , info.nombre);
		//strcpy(nuevo->info.apellido, info.apellido);
		nuevo->info = info;
	        nuevo->next = l->head;
		l->head->prev = nuevo;
	        l->head = nuevo;
    		}
	}
}

LIST *crear_lista(){
    LIST *l =(LIST*) malloc(sizeof(LIST));
    l->head = NULL;
    l->tail = NULL;
    return l;
}

void eliminar(LIST *l){
    if(l->head!=NULL){
        borrar_nodos(l->head);
    }else{
	    free(l);
    }
}

NODE *crear_nodo(){
    NODE *n =(NODE*) malloc(sizeof(NODE));
    n->next = NULL;
    n->prev = NULL;
    strcpy(n->info.nombre , " ");
    strcpy(n->info.apellido , " ");
    return n;
}

void borrar_nodos(NODE *n){
    if (n->next!=NULL ){       //Caso recursivo
        borrar_nodos(n->next);
    }else{
    	n->prev= NULL;           //Caso base
    	free(n);
    }
}

void imprimir(LIST *l){
   for(NODE *i = l->head; i!=NULL; i = i->next){
       	printf("%s, %s\n", i->info.nombre, i->info.apellido);
   }     
}

/*Vamos a borrar los ultimos nodos hasta que ya no queda ninguno
 *Caso base sirve para darle fin a las fnciones recursivas 
 *si no hay caso base nunca va a parar las llamadas recursivas
 *NO sólo hay errores del código hay errores de lógica del programa
 *Al momento de insetar funciona un poco como una pila
 */

