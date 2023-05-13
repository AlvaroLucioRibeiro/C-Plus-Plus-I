#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
struct dados
{
	char nome[50]; // Nome da pessoa
	int matricula; // Matricula
	double nota; // Nota da pessoa
};

int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n; // Numero de pessoas
	int j; // Pessoa J
	int i; // Contador
	char mn[50]; // Menor nome
	double media; // Media das notas
	double soma = 0;//Soma das notas
	double menor = 999; // Menor nota
	dados alunos [150]; // Struct
	//Entrada de dados
	cin >> n;
	cin >> j;
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(alunos[i].nome, 50);
		cin >> alunos[i].matricula;
		cin >> alunos[i].nota;
		soma = soma + alunos[i].nota;
		if (alunos[i].nota < menor)
		{
			menor = alunos[i].nota;
			strcpy(mn, alunos[i].nome);
		}
	}
	//Saída de dados
	media = soma / n;
	cout << fixed << setprecision(2) << endl;
	cout << "Media: " << media << endl;
	cout << mn << endl;
	cout << alunos[j - 1].nome << " ";
	cout << alunos[j - 1].matricula << " ";
	cout << alunos[j - 1].nota << endl;
	return 0;
}
