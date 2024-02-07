#include<iostream>
using namespace std;
int main ()
{
	int m,n,a;
	cout << "Introduce el valor del cateto a dibujar:";
	cin >> a;
	for (n=1; n<=a; n++) 
	  {
	  for (m=n; m<=a; m++)  cout << "#";
	  cout << endl;
      }
	return 0;
}
