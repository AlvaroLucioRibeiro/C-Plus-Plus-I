#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	double vendas, preco, np;
	//Entrada de Dados
	cout << "Digite a quantidade de vendas no m�s: ";
	cin >> vendas;
	cout << "Digite o pre�o atual do produto (em R$): ";
	cin >> preco;
	//Calculos e Sa�da de Dados
	if (preco < 0 || vendas < 0)
		cout << "Erro de Entrada";

	else
	{
		if(vendas == 0)
		{
			np = preco - (preco * 0.1);
			cout << fixed << setprecision(2);
			cout << "Novo pre�o: " << np << "(pre�o reduzido)" << endl;
		}
		if (vendas > 0 && vendas < 500)
		{
			np = preco;
			cout << fixed << setprecision(2);
			cout << "Novo pre�o: " << np << "(pre�o sem reajuste)" << endl;
		}
		if (vendas >= 500 && vendas < 1000)
		{
			np = preco + (preco * 0.1);
			cout << fixed << setprecision(2);
			cout << "Novo pre�o: " << np << "(pre�o aumentado)" << endl;
		}
		if (vendas >= 1000)
		{
			np = preco + (preco * 0.15);
			cout << fixed << setprecision(2);
			cout << "Novo pre�o: " << np << "(pre�o aumentado)" << endl;
		}
	}
	return 0;
}
