#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int n,a;
	cout << "Escribe un numero: ";
	cin >> n;
	cout << "Los impares hasta el son: ";
	for (a=1;a<=n;a++)
	{
	if (a%2!=0) cout << a << ", ";
	}
	return 0;
}
