#include<iostream>
using namespace std;
int main ()
{
	int n,a;
	cout << "Escribe un numero:";
	cin >> n;
	cout << "Multiplos: ";
	for (a=1; a<=10; a++) 
	  {
	  cout << n*a << ", ";
      }
	return 0;
}
