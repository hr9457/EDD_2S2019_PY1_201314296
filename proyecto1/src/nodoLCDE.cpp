#include "nodoLCDE.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

//constructor
nodoLCDE::nodoLCDE(string informacion)
{
    this->dato = informacion;
    this->siguiente = NULL;
    this->anterior = NULL;
}
