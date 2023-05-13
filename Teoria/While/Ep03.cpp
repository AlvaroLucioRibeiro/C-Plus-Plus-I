#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int idade, n, i = 0;
	char op; // Opção de Plano
	double pa = 0, pb = 0, pc = 0, pd = 0;
	//entrada
	do
	{
		cout << "\nEntre com idade do segurado: ";
		cin >> idade;
		while (idade < 0)
		{
			cout << "Idade invalida" << endl;
			cout << "Entre com idade do segurado (maior que zero): ";
			cin >> idade;
		}
		cout << "Entre com a opção do plano, 1 ou 2:";
		cin >> op;
		while (op != '1' && op != '2')
		{
			cout << "Entrada Inválida! Entre somente com 1 ou 2!" << endl;
			cout << "Entre com a opção do plano, 1 ou 2:";
			cin >> op;
		}
		// Comparações
		if (idade <= 15 && op == '1')
		{
			pa++;
			cout << "Plano A" << endl;
		}
		else if (idade <= 15 && op == '2')
		{
			cout << "Plano A" << endl;
			pa++;
		}
		else if ((idade > 15 && idade <= 35) && op == '1')
		{
			cout << "Plano A" << endl;
			pa++;
		}
		else if ((idade > 15 && idade <= 35) && op == '2')
		{
			cout << "Plano B" << endl;
			pb++;
		}
		else if ((idade > 35 && idade <= 55) && op == '1')
		{
			cout << "Plano B" << endl;
			pb++;
		}
		else if ((idade > 35 && idade <= 55) && op == '2')
		{
			cout << "Plano C" << endl;
			pc++;
		}
		else if (idade > 55 && op == '1')
		{
			cout << "Plano C" << endl;
			pc++;
		}
		else if (idade > 55 && op == '2')
		{
			cout << "Plano D" << endl;
			pd++;
		}
		cout << "Digite 1 para novo cadastro ou 0 para sair: ";
		cin >> n;
		i++;
	}
	while (n == 1);
	cout << endl;
	cout << pa * 100.0 / i << "% do Plano A" << endl;
	cout << pb * 100.0 / i << "% do Plano B" << endl;
	cout << pc * 100.0 / i << "% do Plano C" << endl;
	cout << pd * 100.0 / i << "% do Plano D" << endl;
	return 0;
}