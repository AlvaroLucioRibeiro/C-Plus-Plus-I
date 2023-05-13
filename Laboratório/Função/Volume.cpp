#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double volume(int x)
{
	double v; // Resultado do Volume
	
	v = 4.0/3.0*3.14*pow(x,3);
	return v;
}
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variaveis
	double resultado; // Resultado
	int raio; // Valor do raio
	//Entrada de dados
	cin >> raio;
	while (raio < 0)
	{
		cin >> raio;
	}
	resultado = volume(raio);
	// Saída de dados 
	cout << fixed << setprecision(2);
	cout << resultado << endl;
	return 0;
}