#include<iostream>
using namespace std;
int main ()
{
	int n2;
	cout << "Escribe un salario: ";
	cin >> n2;
	if (0>=n2 && n2<=899) cout << "El salario es mínimo";
	if (900>=n2 && n2<=1000) cout << "El salario es bajo";
	if (1101>=n2 && n2<=1499) cout << "El salario es medio";
	if (n2>=1500) cout << "El salario es alto";
	return 0;
}
