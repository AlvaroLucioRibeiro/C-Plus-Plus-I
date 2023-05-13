#include <iostream>
#include <fstream>
#include <iomanip>
#include <strings.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	ifstream arquivos; // Nome do Arquivo
	char nome[50]; // Nome do alimento
	double preco; // Pre�o do alimento
	int maiorpreco = 0; // Maior pre�o do produto
	double soma = 0;// Soma dos produtos
	char produto[50]; //Produto maior
	//Processamento de dados
	arquivos.open("compras.txt", ifstream::in);
	while(!arquivos.eof())
	{
		arquivos >> nome;
		arquivos >> preco;
		if (preco > maiorpreco)
		{
			maiorpreco = preco;
			strcpy(produto, nome);
		}
		soma = soma + preco;
	}
	arquivos.close();
	//Sa�da de dados
	cout << "Produto: " << produto << endl;
	cout << fixed << setprecision(2);
	cout << "Total da Compra: " << soma << " reais" << endl;
	return 0;
}
