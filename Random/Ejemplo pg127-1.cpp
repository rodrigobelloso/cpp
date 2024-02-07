#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float matriza[3][3];
	float matrizb[3][3];
	float matrizsuma[3][3];
	int fila,columna;
	
	for (fila=0;fila<3;fila++)
	   for (columna=0;columna<3;columna++)
	     {
	     	cout << "En la matriz a , fila " << fila << " columna " << columna
	        << " escribe el dato que va ";
	        cin >> matriza[fila][columna];
		 }

	for (fila=0;fila<3;fila++)
	   for (columna=0;columna<3;columna++)
	     {
	     	cout << "En la matriz b , fila " << fila << " columna " << columna
	        << " escribe el dato que va ";
	        cin >> matrizb[fila][columna];
		 }
		 	
	for (fila=0;fila<3;fila++)
	  for (columna=0;columna<3;columna++)
	    matrizsuma[fila][columna]=matriza[fila][columna]+matrizb[fila][columna];
	    
	cout << "La matriz suma es " << endl;
	for (fila=0;fila<3;fila++)
	  {
	  for (columna=0;columna<3;columna++)
	    cout << matrizsuma[fila][columna] << " , ";
	  cout << endl;
      }
	return 0;
}

