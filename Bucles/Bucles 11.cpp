#include<iostream>
using namespace std;
int main ()
{
	int i,n,a;
	cout << "Escribe el numero para hacer la cuenta atras:";
	cin >> n;
	cout << "Escribe el intervalo de decremento:";
	cin >> i;
	cout << "Cuenta atras" << endl;
	for (a=n; a>=0; a=a-i) 
	  {
	  cout << a << endl;
      }
	return 0;
}
