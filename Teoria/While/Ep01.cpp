#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	char nome[51];
	int nascimento, ingresso, n;
	//entrada
	while (n != 0)
	{
		cout << "Nome do funcionário: "; //Nome Do funcionário
		cin.ignore();
		cin.getline(nome, 51);
		cout << "Entre com o ano de nascimento: "; // Nascimento do Funcionario
		cin >> nascimento;
		while (nascimento < 1940 || nascimento > 2020)
		{
			cout << "Data de nascimento invalida! Entre com uma data >= 1940 ou <= 2020" << endl;
			cout << "Entre com o ano de nascimento: ";
			cin >> nascimento;
		}
		cout << "Ano que se ingressou na empresa (>= 1970): "; // Ano de ingresso do funcionario
		cin >> ingresso;
		while (ingresso < 1970 || ingresso > 2020 || ingresso < nascimento)
		{
			cout << "Data de ingresso invalida! Entre com uma data >= 1970 ou <= 2020" << endl;
			cout << "Ano que se ingressou na empresa: ";
			cin >> ingresso;
		}
		//Comparações e saída de dados
		if (2020 - nascimento >= 65)
			cout << "O funcionário está qualificado para aposentar!" << endl;
		else if (2020 - ingresso >= 30)
			cout << "O funcionário está qualificado para aposentar!" << endl;
		else if (2020 - nascimento >= 60 && 2020 - ingresso >= 25)
			cout << "O funcionário está qualificado para aposentar!" << endl;
		else
			cout << "O funcionário não esta qualificado para se aposentar!" << endl;
		// Nova consulta
		cout << "\n(1) para mais uma consulta e (0) para finalizar o programa: ";
		cin >> n;
	}
	return 0;
}
