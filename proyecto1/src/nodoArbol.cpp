#include "nodoArbol.h"
#include <iostream>
#include <string>

using namespace std;

//METODO CONSTRUCTOR DE LOS NODOS QUE SEA VAN AGREGANDO AL ARBOL
//INICIALIZACION DE VARIABLE A LA HORA DE CREAR UN NODO NUEVO
nodoArbol::nodoArbol(string informacion)
{
    izquierda = NULL;
    dato = informacion;
    derecha = NULL;
    nodoPadre = NULL;
}

void nodoArbol::setPadre(nodoArbol *informacionPadre){
    nodoPadre = informacionPadre;
}
