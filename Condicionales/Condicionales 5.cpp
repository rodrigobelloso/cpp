#include<iostream>
using namespace std;
int main ()
{
	int n1, n2;
	cout << "Escribe un numero ";
	cin >> n1;
	cout << "Escribe un numero ";
	cin >> n2;
	if ((n1<0) && (n2<0)) cout << "Los dos numeros son negativos" << endl;
	else if ((n1>0) && (n2>0)) cout << "Los dos numeros son positivos" << endl;
	else cout << "Solo un numero es positivo" << endl;
	
	return 0;
}
