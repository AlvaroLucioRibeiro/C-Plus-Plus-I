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
	//declara��o vari�veis
	dados carros[11]; // Struct
	int i; // Contador
	int n; // Numero
	//Entrada de dados
	cout << "Entre com o numero de veiculos (at� 10): ";
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
		//Sa�da de dados
		cout << "A placa �: " << carros[i].placa << endl;
		cout << "O renavam �: " << carros[i].renavam << endl;
	}
	return 0;
}