#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int s;
	//Entrada e processamento de dados
	cin >> s;
	while (s != 2002)
	{
		cout << "Senha Invalida" << endl;
		cin >> s;
	}
		cout << "Acesso Permitido";
	return 0;
}