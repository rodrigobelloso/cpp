#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int vector1[2];
	int vector2[2];
	int a,b;
	int c=0;
	cout << "Escribe la posición en x del primer vector";
	cin >> vector1[0];
	cout << "Escribe la posición en y del primer vector";
	cin >> vector1[1];
	cout << "Escribe la posición en x del segundo vector";
	cin >> vector2[0];
	cout << "Escribe la posición en y del segundo vector";
	cin >> vector2[1];
	a=(vector1[0]/vector2[0]);
	b=(vector1[1]/vector2[1]);
	if(a==b) cout << "Son linealmente dependientes";
    else cout << "No son linealmente dependientes";
    return 0;
}
