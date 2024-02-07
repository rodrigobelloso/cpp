#include <iostream>
using namespace std;
int main ()
{
int x;
cout<< "escribe tu codigo de usuario:" << endl;
cin>> x;
while(x!=1024)
{
	cout<< "codigo incorrecto"<< endl;
	cout<<"vuelva a intentar"<< endl;
	cin>> x;
}
cout <<"codigo correcto"<< endl;
cout<< "Ahora escribe tu contrasena:" << endl;
cin>> x;
while(x!=7890)
{
	cout<< "contrasena incorrecta"<< endl;
	cout<<"vuelva a intentar"<< endl;
	cin>> x;
}
cout <<"contrasena correcta"<< endl;
return 0;
}

