#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double p; // Dinheiro 
	int c; // Código da moeda
	//entrada de dados
	cin >> p; 
	cin >> c;
	//Processamento de dados
	switch(c)
	{
	case 1:
		cout << fixed << setprecision(2);
		cout << "R$ " << p*3.86 << endl; // Preço de dolár em reais 
		break;
	case 2:
		cout << fixed << setprecision(2);
		cout << "R$ " << p*3.77 << endl; // Preço do franco suiço em reais
		break;
	case 3:
		cout << fixed << setprecision(2);
		cout << "R$ " << p*4.41 << endl; // Preço do euro em reais
		break;
	case 4:
		cout << fixed << setprecision(2);
		cout << "R$ " << p*0.19 << endl; // Preço do peso mexicano em reais
		break;
	case 5:
		cout << fixed << setprecision(2);
		cout << "R$ " << p*5.00 << endl; // Preço da libra em reais 
		break;
	default:
		cout << "Codigo Invalido" << endl;
		break;
	}
	return 0;
}