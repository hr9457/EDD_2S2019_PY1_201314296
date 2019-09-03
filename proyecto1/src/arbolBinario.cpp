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


//FORMA EN QUE SER VA RECORRER EL ARBOL PARA GENERA LOS NODOS Y SUS ENLAZES PREORDEN
void arbolBinario::recorridoArbol(nodoArbol *inicio){
    //INCIO DEL RECORRIDO
    if(inicio==NULL){
        return;//SI EL ARBOL NO CONTIENE NODOS
    }else{
        //
        archivo<<"nodo"<<inicio->dato<<" [ label = \" <ant> | "<<inicio->dato<<" | <next> \" ]; "<<endl;
        recorridoArbol(inicio->izquierda);
        recorridoArbol(inicio->derecha);
    }
}

void arbolBinario::generarEnlazes(nodoArbol *inicio){
    //INCIO DEL RECORRIDO
    if(inicio==NULL){
        return;//SI EL ARBOL NO CONTIENE NODOS
    }else{
        if(inicio->izquierda != NULL){
            nodoArbol *siguienteIzquierda = inicio->izquierda;
            archivo<<"nodo"<<inicio->dato<<":ant->nodo"<<siguienteIzquierda->dato<<";"<<endl;
        }
        generarEnlazes(inicio->izquierda);
        if(inicio->derecha != NULL){
            nodoArbol *siguienteDerecha = inicio->derecha;
            archivo<<"nodo"<<inicio->dato<<":next->nodo"<<siguienteDerecha->dato<<";"<<endl;
        }
        generarEnlazes(inicio->derecha);
    }
}

//GENERA ARCHIVO .DOT PARA EL ARBOL NORMAL
void arbolBinario::generarDot(){
    //escritura en el archivo txt
    archivo.open("arbolBinario.txt",ios::out);
    if(archivo.fail()){
        cout<<"no se logro la apertura del archivo"<<endl;
    }else{
        archivo<<"digraph arbol"<<endl;
        archivo<<"{"<<endl;
        archivo<<"rankdir=TB;"<<endl;
        archivo<<"graph [splines=compund, nodesep=0.5];"<<endl;
        archivo<<"node [shape = record, style=filled, fillcolor=seashell2,width=0.7,height=0.2];"<<endl;
       //CILCOS PARA LA AGREGACION DE LOS NODO DENTRO DEL ARCHIVO
        recorridoArbol(raiz);//DIBUJA LOS NODOS
        archivo<<""<<endl;//ESPACION PARA DISNTINGIR LOS NODOS Y LOS ENLZACES
        generarEnlazes(raiz);//ENLAZA LOS NODOS DIBUJADOS
        archivo<<"}"<<endl;
        archivo.close();//CIERRE DEL ARCHIVO
    }
}

//GENERA LA IMAGEN PNG DEL ARBOL NORMAL
void arbolBinario::generarImagenDot(){
    system("dot -Tpng C:\\Users\\HECTOR\\Documents\\EDD\\EDD_2S2019_PY1_201314296\\proyecto1\\arbolBinario.txt -o C:\\Users\\HECTOR\\Documents\\EDD\\EDD_2S2019_PY1_201314296\\proyecto1\\arbolBinario.png");
}


//----------------------RECORRIDO IN ORDER------------------------------------------------------
void arbolBinario::inOrder(nodoArbol *inicio){
    if (inicio != NULL){
        inOrder(inicio->izquierda);
        //
        archivo<<"nodo"<<numeroNodo<<"  [ shape = oval, label = \""<<inicio->dato<<"\"];"<<endl;
        numeroNodo +=1;
        inOrder(inicio->derecha);
    }
}

void arbolBinario::ArchivoinOrder(){
    //escritura en el archivo txt
    archivo.open("arbolBinarioInOrder.txt",ios::out);
    if(archivo.fail()){
        cout<<"no se logro la apertura del archivo"<<endl;
    }else{
        archivo<<"digraph G"<<endl;
        archivo<<"{"<<endl;
        archivo<<"rankdir = LR"<<endl;
        inOrder(raiz);
        archivo<<""<<endl;
        for(int i=0; i < numeroNodo-1; i++){
            archivo<<"nodo"<<i<<"->nodo"<<i+1<<endl;
        }
        numeroNodo = 0;
        archivo<<"}"<<endl;
    }
}

void arbolBinario::generarImagenInOrder(){
    system("dot -Tpng C:\\Users\\HECTOR\\Documents\\EDD\\EDD_2S2019_PY1_201314296\\proyecto1\\arbolBinarioInOrder.txt -o C:\\Users\\HECTOR\\Documents\\EDD\\EDD_2S2019_PY1_201314296\\proyecto1\\arbolBinarioInOrder.png");
}
//-----------------------------------------------------------------------------------------------------


//----------------------------------FORMA DE RECORRIDO PREORDER EN EL ARBOL------------------------------------------
void arbolBinario::preOrder(nodoArbol *inicio){
    if (inicio != NULL){
        //
        archivo<<"nodo"<<numeroNodo<<"  [ shape = oval, label = \""<<inicio->dato<<"\"];"<<endl;
        numeroNodo +=1;
        preOrder(inicio->izquierda);
        preOrder(inicio->derecha);
    }
}


void arbolBinario::ArchivopreOrder(){
    //escritura en el archivo txt
    archivo.open("arbolBinarioPreOrder.txt",ios::out);
    if(archivo.fail()){
        cout<<"no se logro la apertura del archivo"<<endl;
    }else{
        archivo<<"digraph G"<<endl;
        archivo<<"{"<<endl;
        archivo<<"rankdir = LR"<<endl;
        preOrder(raiz);
        archivo<<""<<endl;
        for(int i=0; i < numeroNodo-1; i++){
            archivo<<"nodo"<<i<<"->nodo"<<i+1<<endl;
        }
        numeroNodo = 0;
        archivo<<"}"<<endl;
    }
}

void arbolBinario::generarImagenPreOrder(){
    system("dot -Tpng C:\\Users\\HECTOR\\Documents\\EDD\\EDD_2S2019_PY1_201314296\\proyecto1\\arbolBinarioPreOrder.txt -o C:\\Users\\HECTOR\\Documents\\EDD\\EDD_2S2019_PY1_201314296\\proyecto1\\arbolBinarioPreOrder.png");
}
//--------------------------------------------------------------------------------------------------------------------



//----------------------------RECORRIDO DEL ARBOL  POS ORDER------------------------------------------
void arbolBinario::posOrder(nodoArbol *inicio){
    if (inicio != NULL){
        posOrder(inicio->izquierda);
        posOrder(inicio->derecha);
        //
        archivo<<"nodo"<<numeroNodo<<"  [ shape = oval, label = \""<<inicio->dato<<"\"];"<<endl;
        numeroNodo +=1;
    }
}


void arbolBinario::ArchivoposOrder(){
    //escritura en el archivo txt
    archivo.open("arbolBinarioPosOrder.txt",ios::out);
    if(archivo.fail()){
        cout<<"no se logro la apertura del archivo"<<endl;
    }else{
        archivo<<"digraph G"<<endl;
        archivo<<"{"<<endl;
        posOrder(raiz);
        archivo<<"rankdir = LR"<<endl;
                archivo<<""<<endl;
        for(int i=0; i < numeroNodo-1; i++){
            archivo<<"nodo"<<i<<"->nodo"<<i+1<<endl;
        }
        numeroNodo = 0;
        archivo<<"}"<<endl;
    }
}

void arbolBinario::generarImagenPosOrder(){
    system("dot -Tpng C:\\Users\\HECTOR\\Documents\\EDD\\EDD_2S2019_PY1_201314296\\proyecto1\\arbolBinarioPosOrder.txt -o C:\\Users\\HECTOR\\Documents\\EDD\\EDD_2S2019_PY1_201314296\\proyecto1\\arbolBinarioPosOrder.png");
}
//------------------------------------------------------------------------------------------------------
