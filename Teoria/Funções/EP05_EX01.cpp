#include <iostream>
using namespace std;
double converte(double a)
{
	double kmh; // Km/h
	kmh = a * 1.60934;
	return kmh;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de Variaveis
	double mph; // Milhas / Hora
	double resultado; // Resultado
	//Entrada de dados
	cout << "Entre com MPH: ";
	cin >> mph;
	while (mph < 0)
	{
		cin >> mph;
	}
	resultado = converte(mph);
	// Sa�da de Dados
	cout << "O MPH convertido para KM/H �: ";
	cout << resultado;
	cout << endl;
	return 0;
}