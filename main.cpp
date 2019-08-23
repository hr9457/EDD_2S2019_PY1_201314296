#include <iostream>
#include <conio.h>

using  namespace std;

int main(){

    int opcionMenu;//para guradr la operacion del usuario

    do{
        cout<<"1. Insert image"<<endl;
        cout<<"2. Select image"<<endl;
        cout<<"3. Apply filters"<<endl;
        cout<<"4. Manual editing"<<endl;
        cout<<"5. Export Image"<<endl;
        cout<<"6. Reports"<<endl;
        cout<<"7. Exit"<<endl;
	   cin>>opcionMenu;

	   //incio de las opciones del menu
	   switch (opcionMenu) {
		//opcion de insercion de imagenes
	   	case 1:
			cout<<"insercion de imagen"<<endl;
			break;
		//opcon de selecion de imagen
		case 2:
			cout<<"Selecion de imagen"<<endl;
			break;
		//opcon de aplicacion de filtos a la imagenes
		case 3:
			cout<<"Aplicacion de filtros"<<endl;
			break;
		//opcon de manual de ediccion
		case 4:
			cout<<"manual de ediccion"<<endl;
			break;
		//opcion para la exportacion de imagenes
		case 5:
			cout<<"Exportacion de imagen"<<endl;
			break;
		//opcon para la generacion de reportes
		case 6:
			cout<<"Reportess"<<endl;
			break;
		//opcion de salida del sistemas y de la aplicacion
		case 7:
			cout<<"Salida"<<endl;
			break;
	     //opcion por defecto por mal ingreso del usuario
		default:
			cout<<"operacion invalida"<<endl;
	   }//fin del switch

   }while (opcionMenu != 7) ; //fini del cilco while

   getch();
   return 0;

}//fin del metodo principal main
