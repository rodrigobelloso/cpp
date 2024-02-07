#include<iostream>
using namespace std;

void intercambia(int &a, int &b)
{
	int n1;
	n1=a;
	a=b;
	b=n1;
}

int main()
{
	int x;
	int y;
	cout << "Introduce 2 numeros: ";
	cin >> x;
	cin >> y;
	cout << "Los numeros valen " << x << " " << y << endl;
	intercambia (x,y);
	cout << "Tras intercambiar los numeros ahora valen " << x << " "<< y << endl;
	return 0;
}
