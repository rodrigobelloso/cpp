#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int m,n,a;
	cout << "Escribe el numero mas alto: ";
	cin >> n;
	cout << "Escribe el numero mas bajo: ";
	cin >> m;
	cout << "Los numeros del intervalo son: ";
	for (a=m;a<=n;a++)
	   {
	   cout << a << " ";
	   }
	return 0;
} 
