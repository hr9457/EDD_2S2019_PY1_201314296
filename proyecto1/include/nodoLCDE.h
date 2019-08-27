#ifndef NODOLCDE_H
#define NODOLCDE_H
#include <string>
#include <iostream>

using namespace std;

class nodoLCDE
{

    private:
        /*
        string dato;
        nodoLCDE *siguiente;
        nodoLCDE *anterior;
        */

    public:
        string dato;
        nodoLCDE *siguiente;
        nodoLCDE *anterior;
        nodoLCDE(string);

};

#endif // NODOLCDE_H
