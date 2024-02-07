#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero del 1 al 10: ";
	cin >> n1;
	if ((n1<1)||(n1>10)) cout << "El numero no estaba entre 1 y 10";
	else if (n1%3==0) cout << "El numero es multiplo de tres";
	     else cout <<"El numero no es multiplo de tres";
	return 0;
}
