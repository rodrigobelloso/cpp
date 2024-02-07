#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float euros,r,t,total;
	
	cout << "Dime los euros que tienes: ";
	cin >> euros;
	cout << "Dime el interes en tanto por uno: ";
	cin >> r;
	cout << "Dime el tiempo en años: ";
	cin >> t;
	total=euros*pow((1+r),t);
	cout << "Al final tendras " << total << " euros.";
	return 0;
}
