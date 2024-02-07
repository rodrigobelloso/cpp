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
	
	datosPelicula peli[100];
	int cantidad=0;
	int opcion;
	int i;
	bool mostrado=false;
	string buscatexto;
	
	do
	{
		cout << "1.-Añadir una pelicula" << endl;
		cout << "2.-Ver el titulo de todas las peliculas guardadas" << endl;
		cout << "3.-Buscar un texto en el archivo de peliculas" << endl;
		cout << "0.-Salir del programa" << endl;
		cin >> opcion;
		if (opcion==1)
		  {
		  	cout << "Escribe el titulo de la peli: ";
			cin >> peli[cantidad].titulo;
			cout << "Escribe el director de la peli: ";
			cin >> peli[cantidad].director;
			cout << "La fecha de su estreno: ";
			cin >> peli[cantidad].fecha;
			cout << "Escribe el prota de la peli: ";
			cin >> peli[cantidad].actor;
			cout << "Una sinopsis muy breve: ";
			cin >> peli[cantidad].sinopsis;
			cout << "Una valoracion (del 1 al 5): ";
			cin >> peli[cantidad].valoracion;
			cantidad++;  
		  }
		if (opcion==2)
		   for (int i=0;i<cantidad;i++)
		      {
		      cout << peli[cantidad].titulo << endl;	  
			  }
		if (opcion==3)
	    {
		    cout << "Dame el texto a buscar en el fichero: ";
		    cin >> buscatexto;
			for (i=0; i<cantidad; i++)
	          if ((peli[i].titulo==buscatexto)||(peli[i].director==buscatexto)||(peli[i].fecha==buscatexto)
	               ||(peli[i].actor==buscatexto)||(peli[i].sinopsis==buscatexto))
		       {
				cout << "La pelicula " << peli[i].titulo << " dirigida por " << peli[i].director << " estrenada el " << peli[i].fecha 
				<< " protagonizada por " << peli[i].actor << " y cuya sinopsis es " << peli[i].sinopsis
				<< " tiene una valoracion de " << peli[i].valoracion << endl;
	            mostrado=true;
			   }
			if (mostrado==false) cout << "No hay ningun texto coincidente" << endl;
			mostrado=false;
	    } 
			  
	} while (opcion!=0);
	return 0;
}
