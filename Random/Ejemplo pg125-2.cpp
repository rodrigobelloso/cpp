#include <iostream>
using namespace std;
int main()
{
	int lista[5];
	int i;
	
	for(i=0;i<=4;i++)
	{
		cout << "Introduce un elemento de la lista: ";
		cin >> lista[i];
	}
    
    for(i=0;i<=4;i++)
	{
		cout << "El elemento numero " << i << " de la lista es " << lista[i] << endl;
	}
    
    
    return 0;
}
