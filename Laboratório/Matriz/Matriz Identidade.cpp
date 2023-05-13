#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	int matriz[10][10]; // Matriz
	int i, j; // Contador (Linha e Coluna)
	int n; //Número de ordens
	cin >> n;
	//Entrada de dados
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if (i == j)
				matriz[i][j] = 1;
			else
				matriz[i][j] = 0;
		}
	}
	//Saída de dados
	for (i = 0; i <= n; i++)
	{
		for(j = 0; j < n; j++)
			cout << matriz[i][j] << " ";
		cout << endl;
	}
	return 0;
}