#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n; // Numero
	int p; // Peso
	int x; // Valor
	int i; // Contador
	double num = 0, den = 0; // Numerador e denominador a ser somado
	double ma = 0; // media ponderada
	//Entrada de dados
	cin >> n;
	//Processamento de dados
	for (i = 1; i <= n; i++)
	{
		cin >> x >> p;
		num = x * p + num;
		den = p + den;
		ma = num / den;
	}
	// Saída de dados
	cout << fixed << setprecision(2);
	cout << "Media ponderada: " << ma << endl;
	return 0;
}
