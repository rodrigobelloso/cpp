#include<iostream>
using namespace std;
int main ()
{
	int n;
	int cifra=0;
	cout << "Escribe un numero: ";
	cin >> n;
	  while (n>0)  
	  {
	  cifra=cifra+1;
	  n=n/10;
	  }
	cout << "El numero tiene " << cifra << " cifras";
	return 0;
}
