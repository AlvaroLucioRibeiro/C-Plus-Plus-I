#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	int n[5];//Vetor
	int i; //Contador
	int aux = 0;//Auxiliar
	//Entrada e saída de dados
	cout << "Digite os 5 números: ";
	for (i = 0; i < 5; i++)
	{
		cin >> n[i];
	}
	cout << "Posições: ";
	for (i = 0; i < 5; i++)
	{
		if (n[i] == 0)
		{
			cout << i << " ";
			aux++;
		}
	}
	if (aux == 0)
		cout << "Nenhum elemento zero no vetor" << endl;
	return 0;
}