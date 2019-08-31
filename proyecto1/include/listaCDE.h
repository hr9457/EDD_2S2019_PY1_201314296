#ifndef LISTACDE_H
#define LISTACDE_H
#include "nodoLCDE.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>//LIBRERIA PARA GENERAR ARCHIVO

using namespace std;

class listaCDE
{
    private:
        int tamanioLista;
        nodoLCDE *cabezaLista;
        nodoLCDE *colaLista;
        ofstream archivoListaCDE;

    public:
        listaCDE();
        void agregarLista(string);
        void eliminarLista();
        void imprimirLista();
        void generarDot();
        void generarImagen();
        void aperturaImagen();
};

#endif // LISTACDE_H
