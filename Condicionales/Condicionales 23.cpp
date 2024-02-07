#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero del 1 al 100: ";
	cin >> n1;
	if (n1<=0 && n1>=100) cout << "Valor incorrecto";
	else if (n1<=100 && n1>=93) cout << "A";
	else if (n1<=92 && n1>=90) cout << "A-";
	else if (n1<=89 && n1>=87) cout << "B+";
	else if (n1<=86 && n1>=83) cout << "B";
	else if (n1<=82 && n1>=80) cout << "B-";
	else if (n1<=79 && n1>=77) cout << "C+";
	else if (n1<=76 && n1>=73) cout << "C";
	else if (n1<=72 && n1>=70) cout << "C-";
	else if (n1<=69 && n1>=67) cout << "D+";
	else if (n1<=66 && n1>=60) cout << "D";
	else if (n1<=59) cout << "F";
	return 0;
}
