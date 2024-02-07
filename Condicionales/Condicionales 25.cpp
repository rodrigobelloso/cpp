#include<iostream>
using namespace std;
int main ()
{
	int h,c1,c2;
	cout << "Escribe la hipotenusa: ";
	cin >> h;
	cout << "Escribe el cateto 1: ";
	cin >> c1;
	cout << "Escribe el cateto 2: ";
	cin >> c2;
	if (h*h==(c1*c1+c2*c2)) cout << "Triangulo rectangulo valido";
	else cout << "No es un triangulo rectangulo";
	return 0;
}
