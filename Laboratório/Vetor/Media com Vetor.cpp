#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double numero[50]; // Vetor
	int n; //Numero de entradas
	int i; //Contador
	double soma = 0; // Soma
	double media = 0; // Media
	int valor; //Valor acima da media
	//entrada de dados
	cin >> n;
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cin >> numero[i];
	}

	for (i = 0; i < n; i++)
	{
		soma = soma + numero[i];
		media = soma / n;
	}
	cout << fixed << setprecision(2);
	cout << "Media: " << media << endl;
	cout << "Maiores que a media: ";
	for (i = 0; i < n; i++)
	{
		if (numero[i] > media)
		{
			valor = numero[i];
			cout << valor << " ";
		}
	}
	return 0;
}