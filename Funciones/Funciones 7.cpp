#include <iostream>
using namespace std;

class Libro
{
	public:
		string autor;
		string titulo;
		string ubicacion;
	
		void Obtener()
		{
			cout << "Autor: " << autor << endl;
			cout << "Titulo: " << titulo << endl;
			cout << "Ubicacion: " << ubicacion << endl;
		}
    
    	void Fijar()
    	{
    		cout << "Datos del libro" << endl;
			cout << "Dame el autor: ";
    		cin >> autor;
    		cout << "Dame el titulo: ";
    		cin >> titulo;
    		cout << "Dame su ubicacion: ";
    		cin >> ubicacion;
		}
};

int main()
{
	Libro Volumen;
	Volumen.Fijar();
	Volumen.Obtener();
	return 0;
}
