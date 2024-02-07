#include <iostream>
using namespace std;
int main()
{
	int lista[4];
	int i;
	int suma=0;
	for(i=0;i<=3;i++)
	{
	cout << "Escribe un numero: ";
	cin >> lista[i];
    }
    
	for(i=0;i<=3;i++)
	{
	suma=suma+lista[i];
    }
	
	cout << "Los datos son: " << endl;
	for(i=0;i<=3;i++)
	{
	cout << lista[i] << endl;
    }
	
	cout << "La media es " << suma/4 << endl;
	return 0;
}
