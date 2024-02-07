#include <iostream>
using namespace std;

int cuadrado(int n)
{
	int resultado=n*n;
    return resultado;
}

int main()
{
	int x;
	cout << "Escribe un numero";
	cin >> x;
	cout << "El cuadrado es " << cuadrado(x);
	return 0;
}
