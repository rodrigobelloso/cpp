#include <iostream>
using namespace std;

float mayor(float n1, float n2)
{
	if (n1>n2) return n1;
    else return n2;
}

int main()
{
	float x,y;
	cout << "Escribe un numero: ";
	cin >> x;
	cout << "Escribe otro numero: ";
	cin >> y;
	cout << "El mayor es " << mayor(x,y);
	return 0;
}
