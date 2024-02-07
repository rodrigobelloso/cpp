#include<iostream>
using namespace std;
int main ()
{
	int n;
	int cifra=0;
	cout << "Escribe un numero del 1 al 10: ";
	cin >> n;
	  while (n!=8)  
	  {
	  cout << "No es el que busco." << endl;
	  cout << "Escribe un numero del 1 al 10: ";
	  cin >> n;
	  }
	if (n==8)cout << "Es el que buscaba. Fin";
	return 0;
}
