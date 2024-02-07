#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero del 1 al 7: ";
	cin >> n1;
	switch (n1)
	{
	 case 1: cout << "Lunes";
	 break;
	 case 2: cout << "Martes";
	 break; 
	 case 3: cout << "Miercoles";
	 break;
	 case 4: cout << "Jueves";
	 break;
	 case 5: cout << "Viernes";
	 break;
	 case 6: cout << "Sabado";
	 break;
	 case 7: cout << "Domingo";
	 break;
	default: cout << "Valor incorrecto";
	}
	return 0;
}
