#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float tiempos[2][8]=
	{
		{9.95, 10.03, 10.09, 10.15, 10.20, 10.41, 10.48, 10.65},
		{9.96, 9.97, 10.06, 10.12, 10.19, 10.19, 10.42, 10.72}
	};
	
	cout << "El tiempo del tercer corredor de la serie 1 es " << tiempos[0][2];
	return 0;
}
