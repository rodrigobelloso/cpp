#include <iostream>
using namespace std;

int main()
{
	struct mp3
	{
	string artista;
	string titulo;
	short duracion;
	int tamano;
	};
	mp3 cancion;		
	
	cout << "Dime el nombre del artista: ";
	cin >> cancion.artista;
	cout << "Dime el titulo de la cancion: ";
	cin >> cancion.titulo;
	cout << "Dame la duracion en segundos: ";
	cin >> cancion.duracion;
	cout << "Dame el tamano en KB del mp3: ";
	cin >> cancion.tamano;
	
	cout << "La cancion " << cancion.titulo << " de " << cancion.artista << " dura " << cancion.duracion
	<< " segundos y ocupa " << cancion.tamano << " KB." << endl;		
	
	return 0;
}
