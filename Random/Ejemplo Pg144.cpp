#include <iostream>
using namespace std;
int main ()
{
	struct datosPersona
	{
		string nombre;
		short edad;
	};
	
	datosPersona personas[50];
	int cantidad=0;
	int opcion;
	
	do
	{
		cout << "1.-Añadir una persona" << endl;
		cout << "2.-Ver todas las personas guardadas" << endl;
		cout << "0.-Salir del programa" << endl;
		cin >> opcion;
		if (opcion==1)
		  {
		  	cout << "Escribe el nombre: ";
        	cin >> personas[cantidad].nombre;
	        cout << "Dime la edad, si no es indiscreto: ";
	        cin >> personas[cantidad].edad;
            cantidad++;  
		  }
		if (opcion==2)
		   for (int i=0;i<cantidad;i++)
		      {
		      cout << personas[cantidad].nombre << " tiene " << personas[cantidad].edad << " anos" << endl;	  
			  }	
	} while (opcion!=0);
	return 0;
}
