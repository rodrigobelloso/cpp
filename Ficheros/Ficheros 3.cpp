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
	
	mp3 cancion[100];		
	 
	int cantidad=0;
	int opcion;
	bool mostrado=false;
	string buscatitulo;
	string buscaartista;
	int i;
	
	do
	{
	   cout << "1.- Anadir cancion" << endl;
	   cout << "2.- Mostrar titulo de todas las canciones" << endl;
	   cout << "3.- Buscar cancion por su titulo" << endl;
	   cout << "4.- Buscar cancion por artista" << endl;
	   cout << "0.- Salir" << endl;
	   cin >> opcion;
	   
	    if (opcion == 1)
	    {
	    cout << "Dime el nombre del artista: ";
	    cin >> cancion[cantidad].artista;
	    cout << "Dime el titulo de la cancion: ";
	    cin >> cancion[cantidad].titulo;
	    cout << "Dame la duracion en segundos: ";
	    cin >> cancion[cantidad].duracion;
	    cout << "Dame el tamano en KB del mp3: ";
	    cin >> cancion[cantidad].tamano;
	    cantidad++;
		}
	   
	    if (opcion == 2)
	      for (i=0; i<cantidad; i++)
	        {
		    cout << "Titulo " << i << " es " << cancion[i].titulo << endl;
			}
	    
		if (opcion == 3)
	    {
		    cout << "Dame un titulo a buscar: ";
		    cin >> buscatitulo;
			for (i=0; i<cantidad; i++)
	          if (cancion[i].titulo==buscatitulo) 
		       {
		       	cout << "La cancion " << cancion[i].titulo << " de " << cancion[i].artista << " dura " << cancion[i].duracion
	            << " segundos y ocupa " << cancion[i].tamano << " KB." << endl;		
	            mostrado=true;
			   }
			if (mostrado==false) cout << "No hay ninguna cancion con ese titulo" << endl;
			mostrado=false;
	    }
	    
		if (opcion == 4)
	    {
		    cout << "Dame un artista a buscar: ";
		    cin >> buscaartista;
			for (i=0; i<cantidad; i++)
	          if (cancion[i].artista==buscaartista) 
		       {
		       	cout << "La cancion " << cancion[i].titulo << " de " << cancion[i].artista << " dura " << cancion[i].duracion
	            << " segundos y ocupa " << cancion[i].tamano << " KB." << endl;		
	            mostrado=true;
			   }
			if (mostrado==false) cout << "No hay ningun artista con ese nombre" << endl;
			mostrado=false;
	    }
	}	while (opcion!=0);
	
	return 0;
}
