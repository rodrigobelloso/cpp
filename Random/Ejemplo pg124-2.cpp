#include<iostream>
using namespace std;
int main ()
{
	int n1,n2;
	for (n1=1; n1<=5; n1++)
	   {
	   for (n2=1; n2<=10; n2++)
	        cout << n1 << " * " << n2 << " = " << n1*n2 << endl;
	   cout << "-------------------------------" << endl;
	   }
	return 0;
}
