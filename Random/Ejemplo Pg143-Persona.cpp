#include <iostream>
using namespace std;
int main ()
{
	struct datosPersona
	{
		string nombre;
		int edad;
	};
	datosPersona persona;
	
	cout << "Escribe tu nombre: ";
	cin >> persona.nombre;
	cout << "Dime tu edad, si no es indiscreto: ";
	cin >> persona.edad;
	cout << persona.nombre << " tiene " << persona.edad << " anos" << endl;
	return 0;
}
