#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de Variaveis
	int matriz[10][10]; // Matriz
	int i, j; // Contador (Linha e Coluna)
	int n, m; //N�mero de ordens
	cout << "Entre com o n�mero de linha e colunas: ";
	cin >> m >> n;
	//Entrada de dados
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin >> matriz[i][j];
		}
	}
	//Sa�da de dados
	cout << "A matriz transposta �: " << endl;
	for (i = 0; i < m; i++)
	{
		for(j = 0; j < m; j++)
			cout << matriz[j][i] << " ";
		cout << endl;
	}
	return 0;
}