#ifndef NODOMATRIZ_H
#define NODOMATRIZ_H
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class nodoMatriz
{
    private:
        //PARA EL LUGAR DE LA POSICIONE EN LA MATRIZ
        int fila;
        int columna;
        //PARA EL GUARDADO DE LA CANTIDAD DE LOS COLORES RGB
        int rojo;
        int verde;
        int azul;
        //PARA SABER HACIA DONDE APUNTAN LOS NODOS DENTRO DE LA MATRIZ
        nodoMatriz *derecha;
        nodoMatriz *izquierda;
        nodoMatriz *arriba;
        nodoMatriz *abajo;

    public:
        //METODO CONTRUCTOR
        nodoMatriz(int,int,int,int,int);//CONTRUCTOR

};

#endif // NODOMATRIZ_H
