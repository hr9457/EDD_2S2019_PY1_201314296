#ifndef CUBO_H
#define CUBO_H
#include "nodoCubo.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class cubo
{
    private:
        string nombreCapa;
        int tamanioCubo;
        nodoCubo *inicioCubo;
        nodoCubo *finalCubo;

    public:
        //CONSTRUCTOR
        cubo();
        void agregarMatriz();
        void generarDot();
        void generarImagen();
        void aperturaImagen();
};

#endif // CUBO_H
