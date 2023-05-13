#include <iostream>
using namespace std;
void soma(int a, int &s)
{
	int i; // Contador
	int so = 1; // Fatorial
	//Calculo do Fatorial
	for (i = 1; i <= a; i++)
	{
		so = so * i;
	}
	s = so;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	int x; // Fatorial
	int resultado;//Resultado
	cin >> x;
	soma (x, resultado);
	cout << resultado;
	return 0;
}
