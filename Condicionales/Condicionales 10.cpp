#include<iostream>
using namespace std;
int main ()
{
	float n1;
	cout << "Escribe una nota: ";
	cin >> n1;
	if (0>=n1 && n2<5) cout << "Insuficiente";
	else if (5>=n1 && n1<6) cout << "Suficiente";
	else if (6>=n1 && n1<7) cout << "Bien";
	else if (7>=n1 && n1<9) cout << "Notable";
	else if (9>=n1 && n1<=10) cout << "Sobresaliente";
	else cout << "Nota incorrecta";
	return 0;
}
