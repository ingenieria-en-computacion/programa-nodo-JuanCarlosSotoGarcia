#ifndef _NODO_H
#define _NODO_H

#include <stdbool.h>
#include <stdlib.h>

typedef int Dato;

typedef struct Nodo {
    Dato dato;
    struct Nodo* sig;
} Nodo;

Nodo* crear_nodo(Dato d);
bool borrar_nodo (Nodo*n);
Nodo* asignar_dato(Nodo* n, Dato d);
Dato obtener_dato(Nodo* n);
Nodo* asignar_referencia(Nodo* n, Nodo* e);
Nodo* obtener_referencia(Nodo* c);

#endif