#include<iostream>
using namespace std;
int main ()
{
	int i,n,a;
	cout << "Escribe el numero para hacer la cuenta progresiva:";
	cin >> n;
	cout << "Escribe el intervalo de incremento:";
	cin >> i;
	cout << "Cuenta progresiva" << endl;
	for (a=0; a<=n; a=a+i) 
	  {
	  cout << a << endl;
      }
	return 0;
}
