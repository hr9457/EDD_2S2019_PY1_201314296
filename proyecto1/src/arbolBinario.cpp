#include "arbolBinario.h"
#include "nodoArbol.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

//METODO CONSTRUCTOR PARA LA INICIALIZACION DE LA VARIABLES DEL ARBOL
arbolBinario::arbolBinario()
{
    raiz = NULL;
}

//METODO PARA INSERTAR LA INFORMACION EN UN NODO Y AGREGARLO AL ARBOL
void arbolBinario::insertarNodo(string informacion){
    nodoArbol *nodo_Nuevo = new nodoArbol(informacion);//CREACION DE UN NODO CON LA INFORMACION QUE RECIBIMOS
    if(raiz==NULL){// EL ARBOL NO EXITE NO CONTIENE NODOS AGREGADOS A EL
        //
        raiz = nodo_Nuevo;
        nodo_Nuevo->nodoPadre=raiz;

    }else{//EL ARBOL YA ESTA CREADO YA CONTIENE NODOS
        //
        nodoArbol *nodoAuxiliar = raiz;
        nodoArbol *padreDelNodo;
        while(true){
            //
            padreDelNodo = nodoAuxiliar;//QUE ES LA RAIZ EN UN PRINCIPIO
            if( informacion < nodoAuxiliar->dato ){//SI EL DATOS ES MENOR A
                //ME MUEVO HACIA LA IZQUIERDA
                nodoAuxiliar = nodoAuxiliar->izquierda;
                if( nodoAuxiliar == NULL ){
                    //VERIFICO SI HACIA LA IZQUIERDA ESTA VACIO
                    padreDelNodo->izquierda=nodo_Nuevo;
                    nodo_Nuevo->nodoPadre= padreDelNodo;
                    return;
                }
            }else{//SI EL DATO FUERA MAYOR O IGUAL A
                //ME DIRIGO HACIA LA DERECHA
                nodoAuxiliar = nodoAuxiliar->derecha;
                if(nodoAuxiliar==NULL){
                    //
                    padreDelNodo->derecha=nodo_Nuevo;
                    nodo_Nuevo->nodoPadre=padreDelNodo;
                    return;
                }//FIN
            }//FIN DEL CICLO QUE REVISA SI EL DATO ES  MAYOR O MENOR
        }//FIN DEL CICLO EL CUAL RECORRE EL ARBOL PARA POSICIONAR EL NODO
    }//FIN DEL ELSE QUE DICE QUE EL ARBOL VA AGREGAR ABAJO DE LA RAIZ
}//FIN DEL METODO AGREGAR AL ARBOL

