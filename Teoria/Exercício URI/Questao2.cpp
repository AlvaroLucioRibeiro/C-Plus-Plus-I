#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int x; // Valor a ser calculado
	int termos; // Entre com o n�mero de termos
	int d = 2; // Denominador come�a em 2
	int e = 1; // Expoente come�a em 1
	int i; // Contador 1
	int j; // Contador 2
	double soma = 0; // Soma
	//entrada de dados
	cout << "Entre com o valor de X: ";
	cin >> x;
	cout << "Entre com o n�mero de termos: ";
	cin >> termos;
	//Processamento de dados
	for (i = 1; i <= termos; i++)
	{
		soma = soma + pow(x, e) / d;
		for (j = d; j <= termos; j++) //Calculo do denominador
		{
			d = d + 2;
		}
		d = d * j;
		e = e + 2;
	}
	//sa�da de dados
	cout << fixed << setprecision(6);
	cout << "F(x)= " << soma << endl;
	return 0;
}