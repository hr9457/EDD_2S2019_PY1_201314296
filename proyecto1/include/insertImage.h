#ifndef INSERTIMAGE_H
#define INSERTIMAGE_H
#include <string>
#include <conio.h>

using namespace std;

class insertImage
{

    private:
        string ruta;

    public:
        //METODO CONTRUCTOR
        insertImage();
        void ingresoRuta();
        void lecturaArchivoInicial();
};

#endif // INSERTIMAGE_H
