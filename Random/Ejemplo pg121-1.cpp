#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero positivo: ";
	cin >> n1;
	while (n1<=0)
	{
	 cout << "El numero no es positivo." << endl;
	 cout << "Escribe otro. Que sea positivo: ";
	 cin >> n1;
	}
	cout << "BIEEENNNNNNNN";
	return 0;
}
