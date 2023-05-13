#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	int matriz[10][10]; // Matriz
	int i, j; // Contador (Linha e Coluna)
	int n; //Número de ordens
	cout << "Entre com a ordem da matriz: ";
	cin >> n;
	while(n < 1 || n > 10)
	{
		cout << "Entre com a ordem da matriz: ";
		cin >> n;
	}
	//Entrada de dados
	cout << "Entre com os elementos da matriz: ";
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin >> matriz[i][j];
		}
	}
	//Saída da Matriz
	cout << endl << "Matriz: " << endl;
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			cout << matriz[i][j] << "\t";
		cout << endl;
	}
	// Saída da Diagonal Principal
	cout << "Diagonal principal: " << endl;
	for(i = 0; i < n; i++)
		cout << matriz[i][i] << "  ";
	//Saída da Diagonal secundária
	cout << endl;
	cout << "Diagonal Secundária: " << endl;
	for(i = 0; i < n; i++)
		cout << matriz[i][n - 1 - i] << "  ";
	cout << endl;
	return 0;
}
