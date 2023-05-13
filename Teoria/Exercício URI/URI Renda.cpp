#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	double salario;
	//Entrada de dados
	cin >> salario;
	//Processamento e saída de dados
	if(salario >= 0 && salario <= 2000)
		cout << "Isento" << endl;
	else if(salario > 2000 && salario <= 3000)
	{
		cout << fixed << setprecision(2);
		cout << "R$ " << (salario - 2000) * 0.08 << endl;
	}
	else if(salario > 3000 && salario <= 4500)
	{
		cout << fixed << setprecision(2);
		cout << "R$ " << 1000 * 0.08 + (salario - 3000) * 0.18 << endl;
	}
	else if(salario > 4500)
	{
		cout << fixed << setprecision(2);
		cout << "R$ " << 1000 * 0.08 + 1500 * 0.18 + (salario - 4500) * 0.28 << endl;
	}
	return 0;
}
