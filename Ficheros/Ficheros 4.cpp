#include <iostream>
using namespace std;

int main()
{
	struct foto
	{
	string nombre;
	short ancho;
	short alto;
	int tamano;
	};
	foto imagen[600];		
	
	int cantidad=0;
	int opcion;
	bool mostrado=false;
	string buscaficha;
	int i;
	
	do
	{
	   cout << "1.- Anadir imagen" << endl;
	   cout << "2.- Mostrar nombre de todas las imagenes" << endl;
	   cout << "3.- Buscar imagen por su nombre" << endl;
	   cout << "0.- Salir" << endl;
	   cin >> opcion;
	   
	    if (opcion == 1)
	    {
	    cout << "Dime el nombre de la imagen: ";
	    cin >> imagen[cantidad].nombre;
	    cout << "Dime el ancho en pixeles: ";
	    cin >> imagen[cantidad].ancho;
	    cout << "Dime el alto en pixeles: ";
	    cin >> imagen[cantidad].alto;
	    cout << "Dame el tamano en KB de la imagen: ";
	    cin >> imagen[cantidad].tamano;
	    cantidad++;
		if (cantidad==600)
		  {
		  cout << "Ha petado el fichero.";
	      opcion=0;
		  }
		}
	   
	    if (opcion == 2)
	      for (i=0; i<cantidad; i++)
	        {
		    cout << "Imagen " << i << " se llama " << imagen[i].nombre << endl;
			}
	    
		if (opcion == 3)
	    {
		    cout << "Dame un nombre de iamgen a buscar: ";
		    cin >> buscaficha;
			for (i=0; i<cantidad; i++)
	          if (imagen[i].nombre==buscaficha) 
		       {
		       	cout << "La imagen " << imagen[i].nombre << " ocupa " << imagen[i].ancho << " pixeles de ancho y  " << imagen[i].alto
	            << " pixeles de alto y pesa " << imagen[i].tamano << " KB." << endl;		
	            mostrado=true;
			   }
			if (mostrado==false) cout << "No hay ninguna imagen con ese nombre" << endl;
			mostrado=false;
	    } 
		
	}	while (opcion!=0);
	
	return 0;
}
