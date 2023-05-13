#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
struct dados
{
	char nome[50]; // Nome do cliente
	int comprado; // Quantidade comprada
	double preco; // Preço a ser pago
};
int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Declaração de Variaveis
	int n; // Numero referente ao cliente
	int i, x = 0; // Contador
	int maior = -9999; // Maior unidade comprada
	double vendas = 0; // Vendas realizadas
	char mn[50]; // Maior nome que comprou
	dados sabonetes[100]; //Struct
	// Entrada de Dados
	cin >> n;
	while (n > 50)
	{
		cin >> n;
	}
	for (i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(sabonetes[i].nome, 50);
		cin >> sabonetes[i].comprado;
		x = x +  sabonetes[i].comprado;
		cin >> sabonetes[i].preco;
		vendas = vendas + sabonetes[i].preco;
		if (sabonetes[i].comprado > maior)
		{
			strcpy(mn, sabonetes[i].nome);
		}
	}
	// Saída de Dados
	cout << "Cliente: " << mn << endl;
	cout << "Total de sabonetes: " << x << " unidades" << endl;
	cout << fixed << setprecision(2);
	cout << "Total das vendas: " << vendas << " reais";
	return 0;
}
