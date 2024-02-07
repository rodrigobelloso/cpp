#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int vector[3];
	cout << "Escribe la posición en x";
	cin >> vector [0];
	cout << "Escribe la posición en y";
	cin >> vector [1];
	cout << "Escribe la posición en z";
	cin >> vector [2];
    cout << "El vector es " << vector[0] << " , " << vector[1] << " , " << vector[2] << endl;
    cout << "El modulo es " << sqrt(vector[0]*vector[0]+vector[1]*vector[1]+vector[2]*vector[2]) << endl;
    return 0;
}
