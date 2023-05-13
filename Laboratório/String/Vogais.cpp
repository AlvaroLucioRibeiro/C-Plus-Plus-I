#include <iostream>
#include <cstring>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	// Declaração de variaveis
	char texto[50]; // Texto
	int tamanho; // Tamanho do texto
	int i; // Contador
	int quantidade = 0; // Quantidade de vogais
	// Entrada de dados
	cin.getline(texto, 50);
	tamanho = strlen(texto);
	for (i = 0; i < tamanho; i++)
	{
		switch(texto[i])
		{
		case 'a':
			texto[i] = 'A';
			quantidade++;
			break;
		case 'e':
			texto[i] = 'E';
			quantidade++;
			break;
		case 'i':
			texto[i] = 'I';
			quantidade++;
			break;
		case 'o':
			texto[i] = 'O';
			quantidade++;
			break;
		case 'u':
			texto[i] = 'U';
			quantidade++;
			break;
		}
	}
	// Saída de dados
	cout << texto << endl;
	cout << quantidade;
	return 0;
}
