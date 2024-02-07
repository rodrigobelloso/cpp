#include<iostream>
using namespace std;
int main ()
{
	int n1,li,ls;
	cout << "Escribe tu estatura en metros: ";
	cin >> n1;
	li=19*n1*n1;
	ls=24*n1*n1;
	cout << "Deberias pesar entre " << li << " y " << ls << " kg.";
	return 0;
}
