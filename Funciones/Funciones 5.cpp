#include<iostream>
using namespace std;

int sumacifras(int a)
{
	int suma=0;
	while(a>0){
	suma=suma+a%10;
	a=a/10;
    }
	return suma;
}

int main()
{
	int x;
	cout << "Escribe un numero: ";
	cin >> x;
	cout << "La suma de sus cifras es " << sumacifras(x);
	return 0;
}
