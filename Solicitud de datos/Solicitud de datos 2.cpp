#include <iostream>
using namespace std;
int main ()
{
	int n1;
	int n2;
	int division;
	int resto;
	
	cout << "Introduce un numero: ";
	cin >> n1;
	cout << "Introduce un nuevo numero: ";
	cin >> n2;
	division = n1/n2;
	resto = n1%n2;
	cout << "La division entera de los dos numero es " << division << endl;
	cout << "El resto de esa division es " << resto;
	return 0;
}
