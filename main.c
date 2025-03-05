#include <stdio.h>
#include "nodo.h"

int main() {
    // Crear nodos
    Nodo* primerNodo = crear_nodo(10);
    Nodo* segundoNodo = crear_nodo(20);
    Nodo* tercerNodo = crear_nodo(30);

    // Asignar referencias
    asignar_referencia(primerNodo, segundoNodo);
    asignar_referencia(segundoNodo, tercerNodo);

    // Imprimir datos de los nodos
    printf("Datos de los nodos:\n");
    Nodo* actual = primerNodo;
    while (actual != NULL) {
        printf("Dato: %d\n", obtener_dato(actual));
        actual = obtener_referencia(actual);
    }

    // Borrar nodos
    printf("Borrando nodos...\n");
    borrar_nodo(tercerNodo);
    borrar_nodo(segundoNodo);
    borrar_nodo(primerNodo);

    return 0;
}