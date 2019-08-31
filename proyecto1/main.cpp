#include <iostream>
#include <conio.h>
#include <string>
#include "listaCDE.h"

using namespace std;

int main()
{

    listaCDE lista;
    lista.agregarLista("hector");
    lista.agregarLista("josue");
    lista.agregarLista("orozco");
    lista.agregarLista("salazar");
    lista.generarDot();
    return 0;
}
