#include <iostream>
#include <cstring>
using namespace std;
struct dados
{
	char nome[50]; // Nome
	int nota1; // Nota 1
	int nota2; // Nota 2
	int nota3; // Nota 3
	int nota4; // Nota 4
};
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n; // Numero de entradas
	int i; // Contador
	int soma = 0; // Soma das notas
	char mn[50]; // Nome do competior com maior nota
	int maior = -9999; // Maior nota
	dados competidor [100]; // Struct
	//Entrada de dados
	cin >> n;
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(competidor[i].nome, 50);
		cin >> competidor[i].nota1;
		cin >> competidor[i].nota2;
		cin >> competidor[i].nota3;
		cin >> competidor[i].nota4;
		soma = competidor[i].nota1 + competidor[i].nota2 + competidor[i].nota3 + competidor[i].nota4;
		if (soma > maior)
		{
			maior = soma;
			strcpy(mn, competidor[i].nome);
		}
		cin.ignore();
	}
	cout << mn << endl;
	return 0;
}
