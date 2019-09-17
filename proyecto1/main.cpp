#include "listaCDE.h"
#include "arbolBinario.h"
#include "insertImage.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>


using namespace std;

int main()
{
    //PRUEBAS REALIZADAS PAR LA LISTA CIRCULAS DOBLEMENTE ENLAZADA
    /*
    listaCDE lista;
    lista.agregarLista("hector");
    lista.agregarLista("josue");
    lista.agregarLista("orozco");
    lista.agregarLista("salazar");
    lista.generarDot();
    */
    /*
    arbolBinario arbol;
    arbol.insertarNodo("Mario1");
    arbol.insertarNodo("Boo");
    arbol.insertarNodo("Geoff");
    arbol.insertarNodo("Pickachu");
    arbol.insertarNodo("Mario2");
    arbol.insertarNodo("Mushroom");
    arbol.generarDot();
    arbol.generarImagenDot();
    //arbol.ArchivopreOrder();
    //arbol.ArchivoposOrder();
    arbol.ArchivoinOrder();
    */

    //CREACION DE LA CLASES PARA LAS OPCIONES DEL MENU
    insertImage insert;
    //VARIABLE PARA EL ALMACENAMEINTO DE LA OPCIN DEL MENU
    int opcionMenu;
    do{
        //MENU PRINCIPAL PARA EL PROYECTO
        cout<<"==================MENU================="<<endl;
        cout<<endl;
        cout<<"1 - Insert Image."<<endl;
        cout<<"2 - Select Image."<<endl;
        cout<<"3 - Apply Filters."<<endl;
        cout<<"4 - Manual Editing."<<endl;
        cout<<"5 - Export Image."<<endl;
        cout<<"6 - Reports."<<endl;
        cout<<"7 - Exit."<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"INGRESE UNA OPCION DEL MENU QUE DESEE REALIZAR: "<<endl;
        cin>>opcionMenu;
        cout<<endl;
        //INICIO PARA APLICAR LAS OPCIONES DEL MENU
        switch(opcionMenu){
            case 1:
                cout<<endl;
                insert.ingresoRuta();
                insert.lecturaArchivoInicial();
                cout<<endl;
                break;
            case 2:
                cout<<"Opcion uno selecionada"<<endl;
                break;
            case 3:
                cout<<"Opcion uno selecionada"<<endl;
                break;
            case 4:
                cout<<"Opcion uno selecionada"<<endl;
                break;
            case 5:
                cout<<"Opcion uno selecionada"<<endl;
                break;
            case 6:
                cout<<"Opcion uno selecionada"<<endl;
                break;
        }
        //system("cls");
    }while(opcionMenu != 7);
    return 0;
}
