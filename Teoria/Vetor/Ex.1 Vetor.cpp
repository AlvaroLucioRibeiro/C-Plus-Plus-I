#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double numero[5]; // Vetor
	int n = 5; //Numero de entradas
	int i; //Contador
	double soma = 0; // Soma
	double media = 0; // Media
	int maior = 0; //Valor acima da media
	int menor = 0; //Valor abaixo da media
	int me = 0; //Valor igual a media
	//Entrada de dados
	cout << "Digite 5 números quaisquer: ";
	for (i = 0; i < n; i++)
	{
		cin >> numero[i];
	}
	// For para media
	for (i = 0; i < n; i++)
	{
		soma = soma + numero[i];
		media = soma / n;
	}
	// For para comparação
	for (i = 0; i < n; i++)
	{
		if (numero[i] > media)
			maior++;
		else if (numero[i] == media)
			me++;
		else if (numero[i] < media)
			menor++;
	}
	cout << endl;
	// Saída de dados
	cout << "Media: " << media << endl;
	cout << "Maiores que a media: " << maior << endl;
	cout << "Menores que a media: " << menor << endl;;
	cout << "Igual a media: " << me << endl;
	return 0;
}
