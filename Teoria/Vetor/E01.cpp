#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int n[5];//Vetor
	int i; //Contador
	int aux = 0;//Auxiliar
	//Entrada e sa�da de dados
	cout << "Digite os 5 n�meros: ";
	for (i = 0; i < 5; i++)
	{
		cin >> n[i];
	}
	cout << "Posi��es: ";
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