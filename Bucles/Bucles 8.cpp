#include<iostream>
using namespace std;

int main()
{
int precio, pagado,vuelta;
int monedas[7]={100,50,20,10,5,2,1};
int i;

cout << "Dime el precio del objeto: ";
cin >> precio;
cout << "Dime con que pagas: ";
cin >> pagado;
cout << "Esta es tu vuelta: ";
vuelta=pagado-precio;
for(i=0;i<7;i++)
{
	while (monedas[i]<=vuelta)
	{
		cout << monedas[i] << " ";
		vuelta=vuelta-monedas[i];
	}
}
return 0;
}
