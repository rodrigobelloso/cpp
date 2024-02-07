#include <iostream>
using namespace std;
int main()
{
	int lista[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int mes;
	
	cout << "Escribe el numero del mes: ";
	cin >> mes;

	cout << "El mes elegido tiene " << lista[mes-1] << " dias" << endl;
	return 0;
}
