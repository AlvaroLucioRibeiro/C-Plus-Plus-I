#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int numero[50]; // Vetor
	int n; //Numero de entradas
	int i; //Contador
	int maior = -9999; //Maior numero
	int menor = 9999; //Menor numero
	int posmenor; // Menor posição
	int posmaior; // Maior posição
	//entrada de dados
	cin >> n;
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cin >> numero[i];
	}

	for (i = 0; i < n; i++)
	{
		if (numero[i] > maior)
		{
			maior = numero[i];
			posmaior = i;
		}
		if (numero[i] < menor)
		{
			menor = numero[i];
			posmenor= i;
		}
	}
	//saída de dados
	cout << "Pos Menor: " << posmenor << endl;
	cout << "Valor Menor:" << menor << endl;
	cout << "Pos Maior: " << posmaior << endl;
	cout << "Valor Maior:" << maior << endl;
	return 0;
}