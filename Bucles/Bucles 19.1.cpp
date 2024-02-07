#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout << "Escribe un numero del 1 al 10: ";
	cin >> n;
	  while (n!=8)  
	  {
	  cout << "No es el que busco." << endl;
	  if ((n<1)||(n>10)) break;
	  cout << "Escribe un numero del 1 al 10: ";
	  cin >> n;
	  }
	if (n==8)cout << "Es el que buscaba. Fin";
	else cout << "Numero incorrecto. FIN";
	return 0;
}
