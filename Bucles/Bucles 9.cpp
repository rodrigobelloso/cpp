#include<iostream>
using namespace std;
int main()
{
float tabla[3][3];
int fila,columna;

cout << "Introduce numeros en la tabla:" << endl;
 for (fila=0;fila<3;fila++)
       for (columna=0;columna<3;columna++)
           {
           	cout << "Dame el dato de la fila" << fila+1 << " y la columna" << columna+1 << " : ";
			   cin >> tabla[fila][columna];
			   while ((tabla[fila][columna]<1)||(tabla[fila][columna]>10))
			         {
			             cout << "Error. Dame de nuevo el dato de la fila" << fila+1 << " y la columna" << columna+1 << " : ";
			             cin >> tabla[fila][columna];
					 }
		   }

cout << "Esta es tu tabla:" << endl;
for (fila=0;fila<3;fila++)
    {
	for (columna=0;columna<3;columna++)
            cout << tabla[fila][columna] << " ";
	cout << endl;
	}
return 0;
}
