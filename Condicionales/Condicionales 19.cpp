#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero: ";
	cin >> n1;
	if (n1%2==0) cout << "Multiplo de 2";
	else cout << "No es multiplo de 2";
	if (n1%3==0) cout << "Multiplo de 3";
	else cout << "No es multiplo de 3";
	if (n1%5==0) cout << "Multiplo de 5";
	else cout << "No es multiplo de 5";
	return 0;
}
