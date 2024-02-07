#include <iostream>
using namespace std;

int suma(int a, int b, int c)
{
	int valor;
	valor=a+b+c;
	return valor;
}

int main()
{
	int x,y,z;
	cout << "Escribe tres numeros: ";
	cin >> x;
	cin >> y;
	cin >> z;
	cout << "Su suma es: " << suma(x,y,z);
	return 0;
}
