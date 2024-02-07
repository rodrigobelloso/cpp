#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int vector1[3];
	int vector2[3];
	cout << "Escribe la posición en x del primer vector";
	cin >> vector1[0];
	cout << "Escribe la posición en y del primer vector";
	cin >> vector1[1];
	cout << "Escribe la posición en z del primer vector";
	cin >> vector1[2];
	cout << "Escribe la posición en x del segundo vector";
	cin >> vector2[0];
	cout << "Escribe la posición en y del segundo vector";
	cin >> vector2[1];
	cout << "Escribe la posición en z del segundo vector";
	cin >> vector2[2];
	cout << "El producto escalar es " << (vector1[0]*vector2[0])+(vector1[1]*vector2[1])+(vector1[2]*vector2[2]);
    return 0;
}
