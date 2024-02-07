#include<iostream>
using namespace std;
int main ()
{
	int n,a;
	int suma=0;
	for (a=1;a<=6;a++)
	{
	cout << "Escribe un numero: ";
	cin >> n;
	suma=suma+n;
	}
	cout << "Su suma es: " << suma ;
	return 0;
}
