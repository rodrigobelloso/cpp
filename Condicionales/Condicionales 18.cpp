#include<iostream>
using namespace std;
int main ()
{
	int n1;
	cout << "Escribe un numero del 1 al 12: ";
	cin >> n1;
	switch (n1)
	{
	 case 1: cout << "Enero";
	 break;
	 case 2: cout << "Febrero";
	 break; 
	 case 3: cout << "Marzo";
	 break;
	 case 4: cout << "Abril";
	 break;
	 case 5: cout << "Mayo";
	 break;
	 case 6: cout << "Junio";
	 break;
	 case 7: cout << "Julio";
	 break;
	 case 8: cout << "Agosto";
	 break;
	 case 9: cout << "Septiembre";
	 break; 
	 case 10: cout << "Octubre";
	 break;
	 case 11: cout << "Noviembre";
	 break;
	 case 12: cout << "Diciembre";
	 break;
	 default: cout << "Valor incorrecto";
	}
	return 0;
}
