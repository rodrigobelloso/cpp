#include <iostream>
using namespace std;
int main()
{
	int lista[10];
	int i;
	int mayor;
	
	for(i=0;i<=9;i++)
	{
	 cout << "Introduce un numero: ";
	 cin >> lista[i];
	}
	
	if (lista[0]>=lista[1]) mayor=lista[0];
	else mayor=lista[1];
	
	for(i=2;i<=9;i++)
	{
	 if (lista[i]>=mayor) mayor=lista[i];
	}
	cout << "El mayor es " << mayor;
	return 0;
}
