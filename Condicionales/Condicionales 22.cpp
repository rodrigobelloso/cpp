#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero: ";
	cin >> n1;
	if (n1<=1000 && n1>=1)
	if (n1%5==0) cout << "Multiplo de 5";
	else cout << "No es multiplo de 5";
	else cout << "Valor incorrecto";
	return 0;
}
