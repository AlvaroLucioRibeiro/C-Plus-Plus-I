#include <iostream>
#include <cmath>
using namespace std;
int soma(int a, int b)
{
	int soma = 1; // Soma
	int i; // Contador
	for (i= 0; i < b; i++)
	{
		soma = soma * a;
	}
	return soma;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	int x; // Valor de X
	int y; // Valor de Y
	int resultado; // Resultado
	// Entrada de Dados
	cin >> x;
	cin >> y;
	resultado = soma(x, y);
	// Saída de Dados
	cout << resultado;
	return 0;
}
