#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero del 1 al 10: ";
	cin >> n1;
	switch (n1)
	{
	case 1: cout << "No es multiplo de 3";
	break;
	case 2: cout << "No es multiplo de 3";
	break; 
	case 3: cout << "Si es multiplo de 3";
	break;
	case 4: cout << "No es multiplo de 3";
	break;
	case 5: cout << "No es multiplo de 3";
	break;
	case 6: cout << "Si es multiplo de 3";
	break;
	case 7: cout << "No es multiplo de 3";
	break;
	case 8: cout << "No es multiplo de 3";
	break;
	case 9: cout << "Si es multiplo de 3";
	break;
	case 10: cout << "No es multiplo de 3";
	break;
	default: cout << "Valor incorrecto";
	}
    
	return 0;
}
