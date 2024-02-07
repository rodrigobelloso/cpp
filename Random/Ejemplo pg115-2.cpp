#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float angulo,radianes;
	float PI=3.14159265f;
	cout << "Escribe un angulo: ";
	cin >> angulo;
	radianes=angulo*PI/180;
	cout << "El seno de " << angulo << " es " << sin(radianes) << endl;
	return 0;
}
