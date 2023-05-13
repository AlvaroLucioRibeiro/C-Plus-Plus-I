#include <iostream>
#include <iomanip>
using namespace std;
void soma(double a, double b, double &s)
{
	//Soma nota 1 e 2
	s = (a + b) / 2;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	double nota1; // Nota 1
	double nota2; // Nota 2
	double resultado = 0; // Resultado
	// Entrada de Dados
	cin >> nota1;
	cin >> nota2;
	soma (nota1, nota2, resultado);
	// Saída de Dados
	cout << fixed << setprecision(1);
	cout << resultado;
	return 0;
}
