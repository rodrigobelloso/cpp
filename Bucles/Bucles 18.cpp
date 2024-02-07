#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int n,a;
	int f=1;
	cout << "Escribe un numero: ";
	cin >> n;
	for (a=n;a>=2;a--)
	   {
	   f=f*a;
	   }
	cout << "El factorial es " << f;
	return 0;
} 
