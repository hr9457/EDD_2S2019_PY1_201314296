#include "listaCDE.h"
#include "nodoLCDE.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

listaCDE::listaCDE()
{
    this->tamanioLista = 0;
    this->cabezaLista = NULL;
    this->colaLista = NULL;
}

void listaCDE::agregarLista(string informacion){

    if( cabezaLista == NULL && colaLista == NULL ){
        cout<<" add elementos a una list vacia "<<endl;
        nodoLCDE *nodoNuevo = new nodoLCDE(informacion);
        cabezaLista = nodoNuevo;
        colaLista = nodoNuevo;
        nodoNuevo->siguiente = colaLista;
        nodoNuevo->anterior = cabezaLista;
        tamanioLista += 1;
    }
    else{
        cout<<" add elementos a  una lista con elementos"<<endl;
        nodoLCDE *nodoNuevo = new nodoLCDE(informacion);
        nodoNuevo->anterior = colaLista;
        colaLista->siguiente = nodoNuevo;
        colaLista = nodoNuevo;
        colaLista->siguiente = cabezaLista;
        cabezaLista->anterior = colaLista;
        tamanioLista += 1;
    }

}//fin de metodo aagregar elementos a la lista



void listaCDE::eliminarLista(){
    cout<<"eliminando elemento de la lista"<<endl;
}



void listaCDE::imprimirLista(){
    cout<<"imprimiendo elementos de la lista"<<endl;
    nodoLCDE *temporal;
    temporal = cabezaLista;
    int temporalTamanio = tamanioLista;

    while(temporalTamanio>0){
            cout<<" <-- "<<temporal->dato<<" --> "<<endl;
            temporal = temporal->siguiente;
            temporalTamanio -= 1;
    }

}//fin del metodo para imprimir la lista
