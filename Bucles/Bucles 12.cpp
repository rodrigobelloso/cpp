#include<iostream>
using namespace std;
int main ()
{
	int m,n,a;
	cout << "Introduce el varo del cateto a dibujar:";
	cin >> a;
	for (n=a; n>=1; n--) 
	  {
	  for (m=n; m<=a; m++)  cout << "#";
	  cout << endl;
      }
	return 0;
}
