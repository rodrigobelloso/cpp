#include <iostream>
using namespace std;

class Titulo
{
	protected:
		string texto;
		void Subrayar()
		{
			for (unsigned int i=0; i<texto.length();i++)
    		    cout << "-";
    		cout << endl;
		}
    public:
    	void FijarTexto(string nuevoTexto)
    	{
    		texto=nuevoTexto;
		}
		string ObtenerTexto()
		{
			return texto;
		}
		void Escribir()
		{
			cout << texto << endl;
			Subrayar();
		}
};

int main()
{
	Titulo saludo;
	saludo.FijarTexto("Hola");
	saludo.Escribir();
	return 0;
}
