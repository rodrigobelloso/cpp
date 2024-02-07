#include<iostream>
using namespace std;
int main ()
{
	int s,alto;
	cout << "Escribe si 1 si eres hombre o 2 si eres mujer:";
	cin >> s;
	cout << "Escribe tu altura en cm:";
	cin >> alto;
	if (s==1)
	if (alto>=165) cout << "Puedes ser policia";
	else cout << "No puedes ser policia";
	else if (alto>=160) cout << "Puedes ser policia";
	else cout << "No puedes ser policia";
	return 0;
}
