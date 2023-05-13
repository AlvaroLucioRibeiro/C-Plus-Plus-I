#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int q; // Quantidade a ser comprada
	int c; // Código do produto
	//entrada de dados
	cin >> c;
	cin >> q;
	//Processamento de dados
	switch(op)
	{
	case 1:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 3.00 << endl;
		break;
	case 2:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 5.50 << endl;
		break;
	case 3:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 6.00 << endl;
		break;
	case 4:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 3.00 << endl;
	case 5:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 2.50 << endl;
		break;
	default:
		cout << "entrada invalida" << endl;
		break;
	}
	return 0;
}
