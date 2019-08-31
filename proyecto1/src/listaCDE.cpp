#include "listaCDE.h"
#include "nodoLCDE.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>//LIBRERIA PARA GENERAR ARCHIVOS

using namespace std;

//METODO CONTRUCTOR DE LA LISTA CDE
listaCDE::listaCDE()
{
    this->tamanioLista = 0;
    this->cabezaLista = NULL;
    this->colaLista = NULL;
}

//METODO PARA AGREGAR ELEMENTOS A A LISTA
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

}//FIN DEL METODO PARA AGREGAR ELEMENTOS A LA LISTA


//METODO PARA ELIMINAR DE LA LISTA SI FUERA NESESARIO AGREGARLO
void listaCDE::eliminarLista(){
    cout<<"eliminando elemento de la lista"<<endl;
}


//IMPRESION EN CONSOLA DE LA LISTA CDE
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

}//FIN DE LA IMPRESION DE LA LISTA


//METODO PARA GENERA EL ARCHIVO .TXT DONDE SE VA ESCRIBIR EL ARCHIVO DOT
void listaCDE::generarDot(){
    archivoListaCDE.open("listaCDE.txt",ios::out);//APERTURA DE ARCHIVO
    if(archivoListaCDE.fail()){
        cout<<"no se puede ejecutar el archivo"<<endl;
    }else{
        archivoListaCDE<<"digraph{"<<endl;
        archivoListaCDE<<"rankdir=LR;"<<endl;
        archivoListaCDE<<"subgraph cluster_0{node[shape=record]"<<endl;
        nodoLCDE *temporal = cabezaLista;
        int temporalTamanio = tamanioLista;
        int numeroDeNodo = 0;
        while(temporalTamanio>=1){
            archivoListaCDE<<"Nodo"<<numeroDeNodo<<" [label=\" {<ant>| "<<temporal->dato<<" |<next>} \" ];"<<endl;
            temporal = temporal->siguiente;
            numeroDeNodo = numeroDeNodo + 1;
            temporalTamanio = temporalTamanio - 1;
            if(temporalTamanio<=0){
                numeroDeNodo = 0;
                while (temporalTamanio+1<tamanioLista){
                    archivoListaCDE<<"Nodo"<<numeroDeNodo<<"->Nodo"<<numeroDeNodo+1<<endl;
                    archivoListaCDE<<"Nodo"<<numeroDeNodo+1<<"->Nodo"<<numeroDeNodo<<endl;
                    numeroDeNodo = numeroDeNodo + 1;
                    temporalTamanio = temporalTamanio + 1;
                }
                break;
            }
        }
        archivoListaCDE<<"Nodo0->Nodo"<<temporalTamanio<<endl;
        archivoListaCDE<<"Nodo"<<temporalTamanio<<"->Nodo0"<<endl;
        archivoListaCDE<<"label = \"Lista Circular\";"<<endl;
        archivoListaCDE<<"}"<<endl;
        archivoListaCDE<<"}"<<endl;
        archivoListaCDE.close();//CIERRE DEL ARCHIVO
    }
}//FIN DEL METODO PARA LA ESCRITURA DEL ARCHIVO .TXT


//METODO PARA GENEAR LA IMGAEN DEL ARCHIVO
void listaCDE::generarImagen(){
}



