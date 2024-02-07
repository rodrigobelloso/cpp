#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero: ";
	cin >> n1;
	if (n1==0) cout << "Es cero";
	if (n1>0) cout << "Positivo";
	if (n1<0) cout << "Negativo";
	return 0;
}
