#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int m,n,a;
	int suma=0;
	cout << "Escribe el numero mas alto: ";
	cin >> n;
	cout << "Escribe el numero mas bajo: ";
	cin >> m;
	for (a=m;a<=n;a++)
	   {
	   suma=suma+a;
	   }
	cout << "La suma del intervalo es " << suma;
	return 0;
} 
