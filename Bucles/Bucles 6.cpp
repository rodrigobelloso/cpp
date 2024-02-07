#include<iostream>
using namespace std;
int main ()
{
	int x,n1,n;
	cout<< "escribe un numero del 1 al 100" << endl;
    cin>> x;
    for (n1=1; n1<=6; n++)
	   {
	    if (x>56) cout<< "Te has pasado." << endl;
	    else if (x<56) cout<< "Te quedas corto." << endl;
	    	else cout<< "El numero es correcto" << endl;
	    if (x==56) break;
	    cout<< "otra oportunidad: " << endl;
	    cin>>x;
	   }
	if (n>6) cout << "Game Over";   
	return 0;
}
