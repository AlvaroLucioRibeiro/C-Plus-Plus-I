#include <iostream>
using namespace std;
void Converte(int t, int &h, int &m, int &s)
{
	s = t % 60; // Calculo dos Segundos
	m = ((t - s) / 60) % 60; // Calculo dos Minutos
	h = t / 3600; // Calculo das Horas
	return;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	int n, H, M, S;
	//Entrada de dados
	cout << "Entre com o valor em segundos: ";
	cin >> n;
	while (n < 0)
	{
		cout << "Entre com o valor em segundos (>0): ";
		cin >> n;
	}
	Converte (n, H, M, S);
	// Saída de dados
	cout << H << "h " << M << "min " << S << "seg" << endl;
	return 0;
}