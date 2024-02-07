#include <iostream>
using namespace std;

void escribirTabla(int i)
{
	int c;
	for(c=1;c<=10;c++)  cout << i << " x " << c << " = " << i*c << endl;
}

int main()
{
	int x;
	cout << "Escribe el numero del que quieres ver su tabla: ";
	cin >> x;
	escribirTabla(x);
	return 0;
}
