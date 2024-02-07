#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero del 1 al 10: ";
	cin >> n1;
	switch (n1)
	{
	case 1: cout << "Suspenso";
	break;
	case 2: cout << "Suspenso";
	break; 
	case 3: cout << "Suspenso";
	break;
	case 4: cout << "Suspenso";
	break;
	case 5: cout << "Suficiente";
	break;
	case 6: cout << "Bien";
	break;
	case 7: cout << "Notable";
	break;
	case 8: cout << "Notable";
	break;
	case 9: cout << "Sobresaliente";
	break;
	case 10: cout << "Matricula de honor";
	break;
	default: cout << "Valor incorrecto";
	}
    
	return 0;
}
