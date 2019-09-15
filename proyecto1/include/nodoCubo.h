#ifndef NODOCUBO_H
#define NODOCUBO_H
#include "nodoMatriz.h"


class nodoCubo
{
    public:
        //PARA EL ALMACENAMIENTO EN EL NODO
        //PARA APUNTAR A CADA MATRIZ (EL INICIO DE CADA MATRIZ)
        nodoMatriz *inicioMatriz;
        nodoCubo *siguiente;
        nodoCubo *anterior;
        //CONTRUCTOR
        nodoCubo();

    private:
};

#endif // NODOCUBO_H
