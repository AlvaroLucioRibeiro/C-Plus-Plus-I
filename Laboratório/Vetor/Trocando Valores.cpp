#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int numero[50]; // Vetor
	int n; //Numero de entradas
	int i; //Contador
	int neg = 0; //Numeros negativos
	//entrada de dados
	cin >> n;
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cin >> numero[i];
	}

	for (i = 0; i < n; i++)
	{
		if (numero[i] < 0)
		{
			neg++;
			numero[i] = 0;
		}
		cout << numero[i] << " ";
	}
	//sa�da de dados
	cout << endl;
	cout << neg;
	return 0;
}