#include <iostream>
using namespace std;
int main ()
{
	int x,y;
	cout<< "escribe un numero" << endl;
    cin>> x;
    y=0;
	while (x>0)
	{
	y=y+x;
	cout<< "escribe un numero" << endl;
    cin>> x;
    }
	cout << "La suma acumulada es: " << y << endl;
	return 0;
}
