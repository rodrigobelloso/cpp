#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int n,a;
	cout << "Escribe un numero: ";
	cin >> n;
	cout << "Cuadrados: ";
	for (a=1;a<=n;a++)
	{
	cout << pow(a,2) << ", ";
	}
	return 0;
}
