#include <iostream>
using namespace std;
double MAIOR(int a, double *b)
{
	int maior = -9999; // Maior elemento
	cout << "Entre com os elementos: ";
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < a; i++)
	{
		if (b[i] > maior)
			maior = b[i];
	}
	return maior;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de Variaveis
	int n, res; // N�mero de elementos
	double elementos[5]; // Os elementos
	cout << "Entre com o n�mero de elementos (1 at� 5): ";
	cin >> n;
	while (n < 1 || n > 5)
	{
		cout << "Entre com o n�mero de elementos (1 at� 5): ";
		cin >> n;
	}
	//Processamento de dados
	res = MAIOR (n, elementos);
	//Sa�da de dados
	cout << "Maior elemento �: " << res << endl;
	return 0;
}
