#include <iostream>
using namespace std;
int soma(int a)
{
	int d = 0; // Teste
	int i; // Contador
	for (i = 1; i <= a; i++)
	{
		if(a % i == 0)
			d++;
	}
	if(d == 2)
		cout << "Primo";
	else
		cout << "Not";
	return i;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de Variaveis
	int x; // Valor de X
	// Entrada de Dados
	cin >> x;
	// Sa�da de Dados
	soma(x);
	return 0;
}
