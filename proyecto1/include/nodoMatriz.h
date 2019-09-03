#ifndef NODOMATRIZ_H
#define NODOMATRIZ_H
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class nodoMatriz
{
    private:
        int fila;
        int columna;
        int rojo;
        int verde;
        int azul;
        nodoMatriz *derecha;
        nodoMatriz *izquierda;
        nodoMatriz *arriba;
        nodoMatriz *abajo;

    public:
        nodoMatriz(int,int,int,int,int);//CONTRUCTOR

};

#endif // NODOMATRIZ_H
