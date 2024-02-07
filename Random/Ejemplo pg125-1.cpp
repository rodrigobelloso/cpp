#include <iostream>
using namespace std;
int main()
{
	int lista[5]={100,200,50,-115,90};
	int suma=0;
	int i;
	
	for(i=0;i<=4;i++)
	{
	 suma=suma+lista[i];
	}
    
    cout << "La suma de los elementos de la lista es " << suma << endl;
	return 0;
}
