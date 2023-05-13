#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	char c; // Código do continente
	//entrada de dados
	cin >> c;
	//Processamento de dados
	switch(c)
	{
	case 'a':
		cout << "Africa" << endl;
		break;
	case 'b':
		cout << "America" << endl;
		break;
	case 'c':
		cout << "Antartida" << endl;
		break;
	case 'd':
		cout << "Asia" << endl;
	case 'e':
		cout << "Europa" << endl;
		break;
	case 'f':
		cout << "Oceania" << endl;
		break;
	default:
		cout << "Opcao invalida!" << endl;
		break;
	}
	return 0;
}
