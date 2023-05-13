#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	int matriz[10][10]; // Matriz
	int i, j; // Contador (Linha e Coluna)
	int n; // Número de ordens
	int soma = 0, somaa = 0, somab = 0; // Soma da Diagonal
	// Entrada de dados
	cout << "Entre com a ordem da matriz: ";
	cin >> n;
	while(n < 1 || n > 10)
	{
		cout << "Entre com a ordem da matriz: ";
		cin >> n;
	}
	// Entrada da Matriz
	cout << "Entre com os elementos da matriz: ";
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin >> matriz[i][j];
		}
	}
	// Saída da Matriz
	cout << "Matriz: " << endl;
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			cout << matriz[i][j] << "\t";
		cout << endl;
	}
	// Soma da Diagonal Principal
	cout << "Soma da Diagonal Principal: ";
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			if (i == j)
				soma = soma + matriz[i][j];
	}
	cout << soma << endl;
	// Soma da Diagonal Acima
	cout << "Soma da Diagonal Acima: ";
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			if (j > i)
				somaa = somaa + matriz[i][j];
	}
	cout << somaa << endl;
	// Soma da Diagonal Abaixo
	cout << "Soma da Diagonal Abaixo: ";
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			if (j < i)
				somab = somab + matriz[i][j];
	}
	cout << somab << endl;
	return 0;
}
