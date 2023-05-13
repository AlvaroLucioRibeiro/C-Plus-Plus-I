#include <iostream>
using namespace std;
struct dados
{
	char placa[11]; // Placa
	char renavam[12]; // Renavam
};

int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	dados carros[11]; // Struct
	int i; // Contador
	int n; // Numero
	//Entrada de dados
	cout << "Entre com o numero de veiculos (até 10): ";
	cin >> n;
	while (n > 10)
	{
		cin >> n;
	}
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cout << "Entre com a placa: ";
		cin.ignore();
		cin.getline(carros[i].placa,11);
		cout << "Entre com o renavam: ";
		cin.getline(carros[i].renavam,12);
		cout << endl;
	}
	for (i = 0; i < n; i++)
	{
		//Saída de dados
		cout << "A placa é: " << carros[i].placa << endl;
		cout << "O renavam é: " << carros[i].renavam << endl;
	}
	return 0;
}