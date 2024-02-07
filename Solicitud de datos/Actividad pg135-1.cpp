#include <iostream>
using namespace std;

void saludarVariasVeces(int i)
{
	int c;
	for(c=1;c<=i;c++)  cout << "Hola" << endl;
}

int main()
{
	int x;
	cout << "Escribe cuantas veces quieres que te salude: ";
	cin >> x;
	saludarVariasVeces(x);
	return 0;
}
