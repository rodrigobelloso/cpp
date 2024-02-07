#include<iostream>
using namespace std;
int main ()
{
	int n1, n2, n3;
	cout << "Escribe un numero: ";
	cin >> n1;
	cout << "Escribe un numero: ";
	cin >> n2;
	cout << "Escribe un numero: ";
	cin >> n3;
	if ((n1<=n3)&&(n3>=n2)) cout<< n3 << " es el mayor";
	else if ((n1<=n2)&&(n2>=n3)) cout<< n2 << " es el mayor" ;
	else cout<< n1 << " es el mayor";
	return 0;
}
