#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout << "Dame un numero";
	cin >> n;
	if (n==0) 
	{
	cout << "El numero era el cero"<<endl;
    cout << "Acertaste";
	}
	else
	{
	cout << "El numero no era un cero, oh que pena"<<endl;
    cout << "Otra oportunidad";
	}
	return 0;
}
