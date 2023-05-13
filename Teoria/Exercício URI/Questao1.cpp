#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double mph; // Velocidade em Mph
	double km; // Velocidade em Km
	//entrada de dados
	cout << "Entre com a velocidade em mph (0 - 190)";
	cin >> mph;
	while (mph < 0 || mph > 190)
	{
		cout << "Entre com a velocidade em mph (0 - 190)";
		cin >> mph;
	}
	//Processamento de dados
	km = mph * 1.60934;
	//saída de dados
	cout << fixed << setprecision(1);
	cout << "Velocidade em km/h é: " << km << endl;
	return 0;
}