#include <iostream>
#include <cstring>
using namespace std;
struct dados
{
	char nome[80]; // Nome
	char cpf[12]; // CPF
	int idade; // idade
};
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n; // Numero de entradas
	int i; // Contador
	int aux = 0; // Auxiliar
	char ncpf[12]; // Numero do CPF
	dados ficha[200]; // Struct
	//Entrada de dados
	cout << "Entre com o número de participantes (Até 200): ";
	cin >> n;
	while (n > 200)
	{
		cin >> n;
	}
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cout << "\nEntre com o nome: ";
		cin.ignore();
		cin.getline(ficha[i].nome, 80);
		cout << "Entre com o CPF: ";
		cin.getline(ficha[i].cpf, 12);
		cout << "Entre com a idade (Entre 10 e 80 anos): ";
		cin >> ficha[i].idade;
		while (ficha[i].idade < 10 || ficha[i].idade > 80)
		{
			cin >> ficha[i].idade;
		}
	}
	cin.ignore();
	cout << "\nEntre com o numero de CPF e veja se o mesmo esta participando: ";
	cin.getline(ncpf, 12);
	// Saídas de dados
	for (i = 0; i < n; i++)
	{
		if (strcmp(ncpf, ficha[i].cpf) == 0)
		{
			cout << "\nEsse participante consta registrado" << endl;
			cout << "Nome: " << ficha[i].nome << endl;
			cout << "Idade: " << ficha[i].idade << " anos" << endl;
			aux++;
		}
	}
	if (aux == 0)
		cout << "Esse participante não consta registrado" << endl;
	return 0;
}
