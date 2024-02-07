#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int vector1[2];
	int vector2[2];
	cout << "Escribe la posición en x del primer vector";
	cin >> vector1[0];
	cout << "Escribe la posición en y del primer vector";
	cin >> vector1[1];
	cout << "Escribe la posición en x del segundo vector";
	cin >> vector2[0];
	cout << "Escribe la posición en y del segundo vector";
	cin >> vector2[1];
	cout << "El vector diferencia es " << vector2[0]-vector1[0] << " , " << vector2[1]-vector1[1];
    return 0;
}
