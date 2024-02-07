#include<iostream>
using  namespace std;
int main()
{
	float x, y;
	cout <<"elija un numero "<< endl;
	cin >>x;
	cout <<"elija otro numero"<< endl;
	cin >>y;
	if (x<y) cout <<"el numero mayor es el segundo: " << y;
	else cout <<"el numero mayor es el primero: " << x;
	return 0;
}
