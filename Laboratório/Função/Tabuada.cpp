#include <iostream>
using namespace std;
void soma()
{
	//Declaração de Variaveis
	int i; // Contador
	int n; // Numero
	// Entrada de Dados
	cin >> n;
	for (i = 1; i <= 10; i++)
	{
		cout << n << " X " << i << " = " << n*i << endl;
	}
}
int main()
{
	soma();
	return 0;
}
