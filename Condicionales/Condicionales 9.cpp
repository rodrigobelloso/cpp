#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un ano: ";
	cin >> n1;
	if (n1%4==0) 
	cout << "Bisiesto";
	else 
	cout << "No bisiesto";
	return 0;
}
