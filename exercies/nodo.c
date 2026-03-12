#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 1 */
Nodo* crearNodo(int valor){
    Nodo *n;
    n = (Nodo*)malloc(sizeof(Nodo));
    n -> dato = valor;
    n -> siguiente = NULL;
    return n;
}

/* Ejercicio 2 */
Nodo* crearArregloNodos(int n){
    Nodo *arreglo;
    arreglo = (Nodo*)calloc(n, sizeof(Nodo));
    return arreglo;
}

/* Ejercicio 3 */
Nodo* agregarNodo(Nodo* arreglo, int* n, int valor){
    Nodo *nuevoarreglo = (Nodo*)realloc(arreglo, (*n+1)*sizeof(Nodo));
    return nuevoarreglo;
}

/* Ejercicio 4 */
void liberarNodos(Nodo* arreglo, int n){
    free(arreglo);
}

/* Ejercicio 5 */
Nodo* construirTresNodos(){
    Nodo *n1, *n2, *n3;
    n1 = (Nodo*)malloc(sizeof(Nodo));
    n2 = (Nodo*)malloc(sizeof(Nodo));
    n3 = (Nodo*)malloc(sizeof(Nodo));
    n1 -> dato = 10;
    n2 -> dato = 20;
    n3 -> dato = 30;
    n1 -> siguiente = n2;
    n2 -> siguiente = n3;
    n3 -> siguiente = NULL;
    return n1;
}

/* Ejercicio 6 */
int contarNodos(Nodo* inicio){
    int contador = 1;
    Nodo *actual = inicio;
    while (actual -> siguiente != NULL){
        contador++;
        actual = actual -> siguiente;
    }
    return contador;
}

/* Ejercicio 7 */
Nodo* crearNodosPorEntrada(){
    int n;
    printf("Cuantos nodos quieres crear? \n");
    scanf("%d", &n);
    Nodo *arreglo = (Nodo*)malloc(n*sizeof(Nodo));
    for (int i = 0; i < n; i++){
        printf("Ingresa el valor para el nodo %d: ", i+1);
        scanf("%d", &arreglo[i].dato);
        arreglo[i].siguiente = NULL;
    }
    return arreglo;
}
