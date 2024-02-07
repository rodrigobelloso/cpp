#include <iostream>
using namespace std;

int esPrimo(int n)
{
	int i;
	int valor=1;
	for (i=2;i<=n-1;i++)
	  if (n%i==0) valor=0;
	return valor;
}

int main()
{
	int x;
	cout << "Escribe un numero: ";
	cin >> x;
	if (esPrimo(x)==0) cout << "No es primo";
	else cout << "Es primo";
	return 0;
}
