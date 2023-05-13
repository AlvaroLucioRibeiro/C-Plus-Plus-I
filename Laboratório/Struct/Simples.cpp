#include <iostream>
using namespace std;
struct dados
{
	char nome[50]; // Nome da pessoa
	char data[15]; // Data
	char op[2]; // Sexo M ou F
};

int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Entrada de dados 
	dados ok[50]; 
	cin.getline(ok[50].nome,50);
	cin.getline(ok[50].data,15);
	cin.getline(ok[50].op,2);
	// Saída de dados 
	cout << ok[50].nome << endl;
	cout << ok[50].data << endl;
	cout << ok[50].op << endl;
	return 0;
}
