#include<iostream>
using namespace std;
int main()
{	int n1, n2, division;
	cout <<"escriba un numero" << endl;
	cin >> n1;
	cout <<"escriba un numero" << endl;
	cin >> n2;
	division= n1/n2;
	if (n2==0) "ERROR";
	else cout << "la division es" << division;	
	return 0;
}
