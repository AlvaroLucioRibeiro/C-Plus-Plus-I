#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int numero, hora;
	double valor, total;
	//entrada de dados
	cout << "Digite o n�mero de matr�cula do funcion�rio: ";
	cin >> numero;
	cout << "Digite quantas horas trabalhadas: ";
	cin >> hora;
	cout << "Digite o valor recebido por horas trabalhadas: ";
	cin >> valor;
	//calculos
	total = hora * valor;
	//sa�da de dados
	cout << "NUMBER = " << numero << endl;
	cout << fixed << setprecision(2);
	cout << "SALARY = U$ " << total << endl;
	return 0;
}