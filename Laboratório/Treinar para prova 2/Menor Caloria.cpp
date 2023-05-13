#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
struct dados
{
	char nome[50]; // Nome do produto
	int calorias; // Calorias do produto
	double preco; // Preço do produto
};
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n; // Repetição
	int i; // Contador
	int menor = 600; // Menor
	char mn[50]; // Menor nome
	double mp; // Menor preço
	dados mercearia [100]; // Struct
	//entrada de dados
	cin >> n;
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(mercearia[i].nome, 50);
		cin >> mercearia[i].preco;
		cin >> mercearia[i].calorias;
		while (mercearia[i].calorias > 500)
		{
			cin >> mercearia[i].calorias;
		}
		if (mercearia[i].calorias < menor)
		{
			menor = mercearia[i].calorias;
			strcpy(mn, mercearia[i].nome);
			mp = mercearia[i].preco;
		}
	}
	// Saída de Dados
	cout << "Produto escolhido: " << endl;
	cout << "Nome: " << mn << endl;
	cout << "Calorias: " << menor << " cal" << endl;
	cout << fixed << setprecision(2);
	cout << "Preco: R$ " << mp << endl;
	return 0;
}
