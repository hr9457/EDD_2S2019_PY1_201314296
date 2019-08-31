#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H
#include "nodoArbol.h"//INCLUYENDO LA CLASE QUE GENERA LOS NODOS DENTRO DEL ARBOL
#include <iostream>
#include <string>

using namespace std;


class arbolBinario
{
    private:
        nodoArbol *raiz;//CREACION DE NOODO EL CUAL ME INDICARA CUAL ES LA RAIZ DEL ARBOL


    public:
        arbolBinario();//METODO CONSTRUCTOR
        void insertarNodo(string);
};

#endif // ARBOLBINARIO_H
