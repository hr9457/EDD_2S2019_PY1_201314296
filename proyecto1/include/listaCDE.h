#ifndef LISTACDE_H
#define LISTACDE_H
#include "nodoLCDE.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class listaCDE
{
    private:
        int tamanioLista;
        nodoLCDE *cabezaLista;
        nodoLCDE *colaLista;

    public:
        listaCDE();
        void agregarLista(string);
        void eliminarLista();
        void imprimirLista();

};

#endif // LISTACDE_H
