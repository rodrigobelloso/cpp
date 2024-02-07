#include<iostream>
using namespace std;
int main ()
{
	int n1,n2,mayor;
	cout << "Escribe un numero: ";
	cin >> n1;
	cout << "Escribe otro numero: ";
	cin >> n2;
	mayor = n1>n2 ? n1:n2;
	cout << "El mayor es " << mayor;
	return 0;
}
