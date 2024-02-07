#include<iostream>
using namespace std;

int mcd(int a, int b)
{
	int maxcomdiv,i,m;
	if (a>=b) m=a;
	else m=b;
	for (i=m;i>0;i--)
	    {
	    	maxcomdiv=i;
	        if ((a%i==0)&&(b%i==0))	break;
		}
	return maxcomdiv;
}

int main()
{
	int x;
	int y;
	cout << "Introduce 2 numeros: ";
	cin >> x;
	cin >> y;
	cout << "El maximo comun divisor es " << mcd(x,y) << endl;
	return 0;
}
