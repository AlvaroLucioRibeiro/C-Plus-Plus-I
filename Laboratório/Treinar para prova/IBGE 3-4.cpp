#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int idade; // Idade
	char nome[50]; // Nome
	// Entrada de dados
	cin >> idade;
	while (idade < 0 || idade > 140)
	{
		cout << "Entrada Invalida" << endl;
		cin >> idade;
	}
	cin.ignore();
	cin.getline (nome, 50);
	// Processamento de dados e Saída de dados
	cout << nome << ":" << endl;
	if (idade < 18)
		cout << "Menor de idade" << " e ";
	if (idade >= 18)
		cout << "Maior de idade" << " e ";
	if (idade >= 0 && idade <= 9)
		cout << "Criança" << endl;
	else if (idade >= 10 && idade <= 14)
		cout << "Pre-adolescente" << endl;
	else if (idade >= 15 && idade <= 17)
		cout << "Adolescente" << endl;
	else if (idade >= 18 && idade <= 25)
		cout << "Jovem" << endl;
	else if (idade >= 26 && idade <= 59)
		cout << "Adulto" << endl;
	else if (idade >= 60 && idade <= 120)
		cout << "Idoso" << endl;
	return 0;
}
