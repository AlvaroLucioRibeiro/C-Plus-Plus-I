#include <iostream>
#include <cstring>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	char palavra[50]; // Palavra
	int tamanho; // Tamanho
	int i; // Contador
	//Entrada de dados
	cin.getline(palavra, 50);
	tamanho = strlen(palavra);
	for (i = tamanho; i >= 0; i--)
	{
		cout << palavra[i];
	}
	return 0;
}
