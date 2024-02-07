#include <iostream>
using namespace std;

void Suma(int n1, int n2)
{
	cout << "La suma es " << n1+n2 << endl;
}

int main()
{
	int x,y;
	cout << "Escribe un numero a sumar ";
	cin >> x;
	cout << "Escribe otro numero a sumar ";
	cin >> y;
	Suma(x,y);
	return 0;
}
