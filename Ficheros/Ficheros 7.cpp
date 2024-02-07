#include <iostream>
using namespace std;

class Libro
{
		string autor;
		string titulo;
		string ubicacion;
		void Obtener()
		{
			cout << "Dime el autor" << endl;
			cin >> autor;
			cout << "Dime el titulo" << endl;
			cin >> titulo;
			cout << "Dime la ubicacion" << endl;
			cin >> ubicacion;
		}
    	void Fijar()
    	{
    		cout << "Autor: " << autor << endl;
    		cout << "Titulo: " << titulo << endl;
    		cout << "Ubicacion: " << ubicacion << endl;
		}
};

int main()
{
	Libro papel;
	papel.Obtener();
	papel.Fijar();
	return 0;
}
