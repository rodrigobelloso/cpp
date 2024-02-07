#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float a[3][3];
	float determinante;
	int fila,columna;
	
	for (fila=0;fila<3;fila++)
	   for (columna=0;columna<3;columna++)
	     {
	     	cout << "En la matriz a , fila " << fila << " columna " << columna
	        << " escribe el dato que va ";
	        cin >> a[fila][columna];
		 }

	determinante=a[0][0]*a[1][1]*a[2][2]+a[1][0]*a[2][1]*a[0][2]
	            +a[2][0]*a[0][1]*a[1][2]-a[0][2]*a[1][1]*a[2][0]
				-a[1][2]*a[2][1]*a[0][0]-a[2][2]*a[0][1]*a[1][2];	 	
	    

	cout << "El determinante vale " << determinante << endl;
    
	return 0;
}

