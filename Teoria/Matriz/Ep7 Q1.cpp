#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de Variaveis
	int matriz[10][10]; // Matriz
	int i, j; // Contador (Linha e Coluna)
	int n; //N�mero de ordens
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
	//Sa�da da Matriz
	cout << endl << "Matriz: " << endl;
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			cout << matriz[i][j] << "\t";
		cout << endl;
	}
	// Sa�da da Diagonal Principal
	cout << "Diagonal principal: " << endl;
	for(i = 0; i < n; i++)
		cout << matriz[i][i] << "  ";
	//Sa�da da Diagonal secund�ria
	cout << endl;
	cout << "Diagonal Secund�ria: " << endl;
	for(i = 0; i < n; i++)
		cout << matriz[i][n - 1 - i] << "  ";
	cout << endl;
	return 0;
}
