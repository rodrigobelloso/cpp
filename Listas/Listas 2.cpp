#include <iostream>
using namespace std;
int main()
{
	int lista[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int mes;
	int dia;
	int i;
	int suma=0;
	
	cout << "Escribe el numero del mes: ";
	cin >> mes;
	cout << "Escribe el dia del mes: ";
	cin >> dia;
	
	for(i=0;i<=mes-2;i++)
	{
	 suma=suma+lista[i];
	}
	suma=suma+dia;
	cout << "El dia elegido ocupa la posicion " << suma << " en el ano" << endl;
	return 0;
}
