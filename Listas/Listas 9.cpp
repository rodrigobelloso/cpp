#include <iostream>
using namespace std;
int main()
{
	int i,j,temp;
	int lista[10];
	
	for (i=0; i<10; i++)
	{
	cout << "Escribe un numero para la lista: ";
	cin >> lista[i];
	}
	
	for (i=1; i<10; i++)
         for (j=0 ; j<9; j++)
               if (lista[j] > lista[j+1])
                    {
					    temp = lista[j];
                        lista[j] = lista[j+1];
                        lista[j+1] = temp;
                    }

    cout << "Lista ordenada: " << endl;
    
	for (i=0; i<10; i++)
	{
	cout << lista[i] << endl;
	}
    return 0;
}
