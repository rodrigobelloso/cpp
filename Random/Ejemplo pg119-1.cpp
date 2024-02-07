#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout << "Escribe un numero: ";
	cin >> n;
	if (n!=0) cout << "El numero no es cero" << endl;
	if ((n==2)||(n==3)) cout << "Es dos o tres" << endl;
	if ((n>=2)&&(n<=7)) cout << "El numero esta entre 2 y 7" << endl;
	return 0;
}
