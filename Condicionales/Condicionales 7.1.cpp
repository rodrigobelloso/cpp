#include<iostream>
using namespace std;
int main ()
{
	int n1, n2, n3;
	cout << "Escribe tres numeros: ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	if ((n1<n2)&&(n2<n3)) 
	{
	cout << "Están escritos en orden creciente";
	}
	else 
	cout << "No estan en orden creciente";
	return 0;
}
