#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float matriza[2][2];
	float matrizm[2][2];
	int fila,columna;
	
	for (fila=0;fila<2;fila++)
	   for (columna=0;columna<2;columna++)
	     {
	     	cout << "En la matriz a , fila " << fila << " columna " << columna
	        << " escribe el dato que va ";
	        cin >> matriza[fila][columna];
		 }

	for (fila=0;fila<2;fila++)
	  for (columna=0;columna<2;columna++)
	    matrizm[fila][columna]=matriza[columna][fila];
	    
	cout << "La matriz traspuesta es " << endl;
	for (fila=0;fila<2;fila++)
	  {
	  for (columna=0;columna<2;columna++)
	    cout << matrizm[fila][columna] << " , ";
	  cout << endl;
      }
	return 0;
	
}
