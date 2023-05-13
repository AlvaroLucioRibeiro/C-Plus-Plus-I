#include <iostream>
#include <cstring>
using namespace std;
struct dados
{
	char nome[31]; // Nome
	int acertos; // Acertos
	int erros; // Erros
	int tempo; // Tempo
	double NF; // Nota Final
};
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n; // Numero de entradas
	int i; // Contador
	int maior = -9999; //Maior nota
	char ma[31]; // Equipe vencedora
	dados equipes[10]; // Struct
	//Entrada de dados
	cout << "Entre com o número de participantes (Até 10): ";
	cin >> n;
	while (n > 10)
	{
		cin >> n;
	}
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cout << "\nEntre com o nome da equipe: ";
		cin.ignore();
		cin.getline(equipes[i].nome, 31);
		cout << "Entre com o numero de acertos: ";
		cin >> equipes[i].acertos;
		cout << "Entre com o numero de erros: ";
		cin >> equipes[i].erros;
		cout << "Entre com o tempo (em minutos): ";
		cin >> equipes[i].tempo;
		while (equipes[i].tempo < 0)
		{
			cin >> equipes[i].tempo;
		}
		equipes[i].NF = 5.0 * equipes[i].acertos - 2.0 * equipes[i].erros + 1.0 / equipes[i].tempo;
		if (equipes[i].NF > maior)
			maior = equipes[i].NF;
	}
	// Saída de dados
	for (i = 0; i < n; i++)
	{
		if (equipes[i].NF > maior)
		{
			strcpy(ma, equipes[i].nome);
			cout << "\nA(s) equipe(s) vencedora(as): " << ma << endl;
			cout << "Nota final: " << maior;
		}
	}
	return 0;
}
