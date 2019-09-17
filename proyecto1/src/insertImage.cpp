#include "insertImage.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;

insertImage::insertImage()
{}

//PARA GUARDAR LA RUTA QUE EL USUARIO INGRESARA
void insertImage::ingresoRuta(){
    cout<<"ingrese la ruta de la archivo incial de la imagen"<<endl;
    cout<<"ejemplo de ruta Documents/mario/mario.csv"<<endl;
    cout<<"ruta: ";
    cin>>ruta;
    cout<<"la ruta ingresada es: "<<ruta<<endl;
}

//LECTURA DEL ARCHIVO INICIAL CON LA CONFI, Y LAS CAPAS DE LA IMAGEN
void insertImage::lecturaArchivoInicial(){
    ifstream archivoCSV(ruta);
    string layer;
    string file;
    if(archivoCSV.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
    }

    while(archivoCSV.peek()!=EOF){
        //
        getline(archivoCSV,layer,',');
        getline(archivoCSV,file,'\n');

        cout<<"indice : "<<layer<<endl;
        cout<<"nombre : "<<file<<endl;
        cout<<"---------------------------"<<endl;
    }
    archivoCSV.close();
}
