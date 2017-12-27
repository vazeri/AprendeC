#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

typedef char tipo_dato;
typedef struct pila{
    tipo_dato listaPila[TAM];
    int cima;
}PILA;

/// Funciones Basicas para el funcionamiento de la Pila Estatica ///

void crearPila(PILA *P);
int pilaVacia(PILA P1);
int pilaLlena(PILA P1);
void insertar(PILA *P1, tipo_dato dato);
tipo_dato quitar(PILA *P1);
void limpiarPila(PILA *P1);
tipo_dato cima(PILA P1);

/// Estas funciones sin para el programa del palindromo ///

void alreves(PILA P1, PILA *P2);
int comparaPilas(PILA P1, PILA P2);
int balanceados(char *string);
