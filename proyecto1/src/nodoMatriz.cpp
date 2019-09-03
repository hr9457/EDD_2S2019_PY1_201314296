#include "nodoMatriz.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//CONSTRUCTOR
nodoMatriz::nodoMatriz(int num_fila,int num_columna,int cantidad_rojo,int cantidad_verde,int cantidad_azul)
{
        fila = num_fila;
        columna = num_columna;
        rojo = cantidad_rojo;
        verde = cantidad_verde;
        verde = cantidad_verde;
        derecha = NULL;
        izquierda = NULL;
        arriba = NULL;
        abajo = NULL;
}
