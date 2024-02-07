#include<iostream>
using namespace std;
int main ()
{
	int n1,n2,n3,n4,n5;
	cout << "Escribe un numero: ";
	cin >> n1;
	cout << "Escribe un numero: ";
	cin >> n2;
	cout << "Escribe un numero: ";
	cin >> n3;
	cout << "Escribe un numero: ";
	cin >> n4;
	cout << "Escribe un numero: ";
	cin >> n5;
	if (n1>=n2 && n1>=n3 && n1>=n4 && n1>=n5) cout << "El mayor es " << n1;
	if (n2>=n1 && n2>=n3 && n2>=n4 && n2>=n5) cout << "El mayor es " << n2;
	if (n3>=n1 && n3>=n2 && n3>=n4 && n3>=n5) cout << "El mayor es " << n3;
	if (n4>=n1 && n4>=n2 && n4>=n3 && n4>=n5) cout << "El mayor es " << n4;
	if (n5>=n1 && n5>=n2 && n5>=n3 && n5>=n4) cout << "El mayor es " << n5;
	return 0;
}
