#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H
#include "nodoArbol.h"//INCLUYENDO LA CLASE QUE GENERA LOS NODOS DENTRO DEL ARBOL
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;


class arbolBinario
{
    private:
        nodoArbol *raiz;//CREACION DE NOODO EL CUAL ME INDICARA CUAL ES LA RAIZ DEL ARBOL


    public:
        arbolBinario();//METODO CONSTRUCTOR
        ofstream archivo;
        int numeroNodo = 0;
        void insertarNodo(string);
        void recorridoArbol(nodoArbol*);
        void generarEnlazes(nodoArbol*);
        void generarDot();
        void generarImagenDot();
        void aperturaImagen();

        //RECORRIDOS EN EL ARBOL
        //-----------IN ORDER--------
        void inOrder(nodoArbol*);
        void ArchivoinOrder();
        void generarImagenInOrder();
        //----------------------------
        //-------PRE ORDERD------
        void preOrder(nodoArbol*);
        void ArchivopreOrder();
        void generarImagenPreOrder();
        //-----------------------
        //--------POS ORDER---------
        void posOrder(nodoArbol*);
        void ArchivoposOrder();
        void generarImagenPosOrder();
        //----------------------------
};

#endif // ARBOLBINARIO_H
