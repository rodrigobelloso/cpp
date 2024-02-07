#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe una edad: ";
	cin >> n1;
	if (2011>=n1 && n1<=2019) cout << "Crío";
	if (1994>=n1 && n1<=2010) cout << "Generacion Z";
	if (1981>=n1 && n1<=1993) cout << "Millenial";
	if (1969>=n1 && n1<=1980) cout << "Generacion X";
	if (1949>=n1 && n1<=1968) cout << "Baby Boom";
	if (n1<=1948)cout << "Silent Generation";
	return 0;
}
