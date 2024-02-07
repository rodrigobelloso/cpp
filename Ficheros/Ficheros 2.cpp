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
	foto imagen;		
	
	cout << "Dime el nombre de la imagen: ";
	cin >> imagen.nombre;
	cout << "Dime el ancho en pixeles: ";
	cin >> imagen.ancho;
	cout << "Dime el alto en pixeles: ";
	cin >> imagen.alto;
	cout << "Dame el tamano en KB de la imagen: ";
	cin >> imagen.tamano;
	
	cout << "La imagen " << imagen.nombre << " ocupa " << imagen.ancho << " pixeles de ancho y  " << imagen.alto
	<< " pixeles de alto y pesa " << imagen.tamano << " KB." << endl;		
	
	return 0;
}
