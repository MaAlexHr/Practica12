"""
Progrmador Hernandez Rojas Mara Alexandra Practica 12
Pila con programacion orientada a objetos en Python

En programación orientada a objetos las clases se parecen a las estructuras no son lo mismo pero si se parecen
"""
class Nodo:
    def __init__(self):
        self.nombre = None
        self.apellidos = None
        self.next = None

    def eliminar(self):
        self = None


class Lista:
    def __init__(self):
        self.head = None
        self.tail = None

    def agregar(self, nombre, apellidos):
        if self.head == None:
            self.head = Nodo()#Aqui mandas llamar al init de nodo
            self.head.nombre = nombre
            self.head.apellidos = apellidos
            return
        temporal = Nodo()
        temporal.nombre = nombre
        temporal.apellidos = apellidos
        temporal.next = self.head
        self.head = temporal

    def eliminar(self):
        temp = self.head
        while temp.next != None:
            while temp.next != None:
                temp.eliminar()
        temp.eliminar()
"""
El self es como un malloc reserva memorias asocia a las clases con su miembros
struct nodo{
    char *nombre;       Y una fnción:
    char *apellidos;        nodo *crear_nodo();
    nodo *next
    }

Esta sería la froma de insertar/eliminar iterativa
"""
