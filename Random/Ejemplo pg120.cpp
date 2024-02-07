#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero del 1 al 5: ";
	cin >> n1;
	switch (n1)
	{
	 case 1: cout << "Uno";
	 break;
	 case 2: cout << "Dos";
	 break; 
	 case 3: cout << "Tres";
	 break;
	 case 4: cout << "Cuatro";
	 break;
	 case 5: cout << "Cinco";
	 break;
	default: cout << "Valor incorrecto";
	}
	return 0;
}
