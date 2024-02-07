#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int n,a;
	int p=1;
	cout << "Escribe un numero: ";
	cin >> n;
	for (a=n-1;a>=2;a--)
	   {
	   if (n%a==0) p=0;
	   }
	if (p==1) cout << "Es primo";
	else cout << "No es primo";
	return 0;
} 
