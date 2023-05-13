#include <iostream>
#include <cstring>
using namespace std;
struct dados
{
	int numeros;
};
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n; // Numero de entradas
	int i; // Contador
	int soma = 0; // Soma dos numeros
	dados numero [10]; // Struct
	//Entrada de dados
	cin >> n;
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cin >> numero[i].numeros;
		if (numero[i].numeros % 2 == 0)
			soma = soma + numero[i].numeros;
	}
	cout << soma << endl;
	return 0;
}
