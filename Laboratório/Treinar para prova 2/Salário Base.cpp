#include <iostream>
#include <iomanip>
using namespace std;
double dados (double sal, double com, int ven, int por)
{
	int sf = 0;// Salario final
	sf = sal + (com/100*(ven*por));
	return sf;
};
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	double salario; // Sal�rio
	double comissao; // Comiss�o 
	int vendas; // Numero de vendas
	int porcentagem; // Porcentagem
	//entrada de dados
	cin >> salario >> comissao >> vendas >> porcentagem;
	//Processamento de dados
	dados(salario, comissao, vendas, porcentagem);
	//Sa�da de dados
	cout << fixed << setprecision(2);
	cout << "Salario total: R$ " << dados(salario, comissao, vendas, porcentagem); 
	return 0;
}