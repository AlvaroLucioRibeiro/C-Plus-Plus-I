#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int c; // Código do animal, (0) Gato, (1) Cachorro e (-1) finalizar programa
	int g = 0; // Número de Gatos
	int ca = 0; // Número de cachorros
	int i = 0; // Contador
	double p; // Preço a ser pago
	double soma = 0; // Soma a ser pago
	//Entrada e processamento de dados
	cin >> c;
	while (c != -1)
	{
		i++;
		cin >> p;
		if (c == 0)
			g++;
		else
			ca++;
		cin >> c;
		soma = soma + p;
	}
	//saída de dados
	cout << fixed << setprecision(2);
	cout << "Gatos: " << (g * 100.0 / i) << " %" << endl;
	cout << "Cachorro: " << (ca * 100.0 / i) << " %" << endl;
	cout << "Lucro total: " << soma << " Reais" << endl;
	return 0;
}