#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int n,a;
	cout << "Escribe el numero de potencias del numero 2 que quieres ver: ";
	cin >> n;
	cout << "Las potencias son: ";
	for (a=1;a<=n;a++)
	{
	cout << pow(2,a) << ", ";
	}
	return 0;
}
