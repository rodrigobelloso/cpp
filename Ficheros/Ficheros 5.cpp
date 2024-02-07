#include <iostream>
using namespace std;
int main ()
{
	struct datosPelicula
	{
		string titulo;
		string director;
		string fecha;
		string actor;
		string sinopsis;
		int valoracion;
	};
	datosPelicula peli;
	
	cout << "Escribe el titulo de la peli: ";
	cin >> peli.titulo;
	cout << "Escribe el director de la peli: ";
	cin >> peli.director;
	cout << "La fecha de su estreno: ";
	cin >> peli.fecha;
	cout << "Escribe el prota de la peli: ";
	cin >> peli.actor;
	cout << "Una sinopsis muy breve: ";
	cin >> peli.sinopsis;
	cout << "Una valoracion (del 1 al 5): ";
	cin >> peli.valoracion;
	cout << "La pelicula " << peli.titulo << " dirigida por " << peli.director << " estrenada el " << peli.fecha 
	<< " protagonizada por " << peli.actor << " y cuya sinopsis es " << peli. sinopsis
	<< " tiene una valoracion de " << peli.valoracion << endl;
	return 0;
}
