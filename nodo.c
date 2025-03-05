#include "nodo.h"
#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 
// Crear nodo
Nodo* crear_nodo(Dato d) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo != NULL) {
        nuevo->dato = d;
        nuevo->sig = NULL;
    }
    return nuevo;
}

// Borrar nodo
bool borrar_nodo(Nodo* n) {
    if (n != NULL) { 
        free(n); 
        return true; 
    }
    return false;
}

// Asignar dato 
Nodo* asignar_dato(Nodo* n, Dato d) {
    if (n != NULL) {
        n->dato = d; 
        return n;
    }
    return NULL;
}

// Obtener dato
Dato obtener_dato(Nodo* n) {
    if (n == NULL) {
        printf("No hay datos en el nodo\n");
        return -1; 
    }
    return n->dato;
}

// Asignar referencia
Nodo* asignar_referencia(Nodo* n, Nodo* e) {
    if (n != NULL) {
        n->sig = e;
    }
    return n;
}

// Obtener referencia 
Nodo* obtener_referencia(Nodo* n) {
    if (n != NULL) {
        return n->sig; 
    }
    return NULL;
}