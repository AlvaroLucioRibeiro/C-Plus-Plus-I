#include <iostream>
#include <cmath>
using namespace std;
int Fator(int N)
{
	int so = 1;
	for (int i = 2; i <= N; i++)
		so = so * i;
	return so;
}
double Soma(double X, int N)
{
	int si = -1, F = 2;
	double C = 1;
	for (int i = 2; i <= N; i++)
	{
		C = C + (pow(X, F) / Fator(F)) * si;
		F = F + 2;
		si = si * (-1); //Calculo de sinal
	}
	return C;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	double x, resultado; // Numero x
	int n; // Numero de termos
	cout << "Entre com o numero de termos (entre 1 e 20, inclusive): ";
	cin >> n;
	while (n < 1 || n > 20)
	{
		cout << "Entre com o numero de termos (entre 1 e 20, inclusive): ";
		cin >> n;
	}
	cout << "Entre com o valor de X: ";
	cin >> x;
	resultado = Soma(x, n);
	//Saída de dados
	cout << "Cos(x): ";
	cout << resultado << endl;
	return 0;
}