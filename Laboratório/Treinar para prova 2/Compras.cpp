#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Declaração de Variaveis
	char nome[50]; // Nome do Cliente
	double dinheiro; // Dinheiro que o cliente levou
	char nomeproduto[50]; // Nome do produto
	int x; // Variavel contadora
	// Entrada de dados
	cin.getline(nome, 50);
	cin >> dinheiro;
	cin.ignore();
	cin.getline(nomeproduto, 50);
	// Processamento de dados
	if (strcmp(nomeproduto, "Amaciante") == 0)
		x = dinheiro / 22.90;
	else if (strcmp(nomeproduto, "Pao de mel") == 0)
		x = dinheiro / 29.90;
	else if (strcmp(nomeproduto, "Peru de natal") == 0)
		x = dinheiro / 87.50;
	else if (strcmp(nomeproduto, "Bananas") == 0)
		x = dinheiro / 6.70;
	else if (strcmp(nomeproduto, "Sorvete") == 0)
		x = dinheiro / 15.60;
	// Saída de dados
	if (x == 0)
		cout << nome << " nao consegue comprar este produto." << endl;
	else
		cout << nome << " consegue comprar " << x << " unidades de " << nomeproduto << "." << endl;
	return 0;
}