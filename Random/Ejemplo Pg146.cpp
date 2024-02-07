#include <iostream>
using namespace std;

class Titulo
{
	public:
		string texto;
		void Escribir()
		{
			cout << texto << endl;
			Subrayar();
		}
    protected:
    	void Subrayar()
    	{
    		for (unsigned int i=0; i<texto.length();i++)
    		    cout << "-";
    		cout << endl;
		}
};

class TituloCentrado: public Titulo
{
	public:
		void Escribir()
		{
		int espacios = (80 - texto.length())/2;
		for (int i=0;i<espacios;i++)
		    cout << " ";
		cout << texto << endl;
		for (int i=0;i<espacios;i++)
		    cout << " ";
		Subrayar();    
		}
};

int main()
{
	Titulo saludo;
	saludo.texto="Holis";
	saludo.Escribir();
	
	TituloCentrado saludo2;
	saludo2.texto="Hasta luego, MariCarmen";
	saludo2.Escribir();
	
	return 0;
}
