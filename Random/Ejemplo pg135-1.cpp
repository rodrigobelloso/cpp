#include <iostream>
using namespace std;

void subrayar(int cantidad)
{
	int i;
	for (i=0;i<cantidad;i++)
	     cout << "-";
	cout << endl;
}

int main()
{
	cout << "Primer ejemplo" << endl;
	subrayar(20);
	
	cout << "Segundo ejemplo" << endl;
	subrayar(30);
	
	cout << "Tercer ejemplo" << endl;
	subrayar(40);
	
	return 0;
}
