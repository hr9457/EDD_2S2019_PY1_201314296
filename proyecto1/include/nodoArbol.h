#ifndef NODOARBOL_H
#define NODOARBOL_H
#include <iostream>
#include <string>

using namespace std;

class nodoArbol
{
    public:
        nodoArbol *izquierda;
        string dato;
        nodoArbol *derecha;
        nodoArbol *nodoPadre;


        nodoArbol(string);//CONSTRUCTOR
        void setIzquierda();
        void setDerecha();
        void setPadre(nodoArbol*);
};

#endif // NODOARBOL_H
