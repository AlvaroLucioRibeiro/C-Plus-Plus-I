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
	switch(c)
	{
	case 1:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 4.00;
		break;
	case 2:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 4.50;
		break;
	case 3:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 5.00;
		break;
	case 4:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 2.00;
		break;
	case 5:
		cout << fixed << setprecision(2);
		cout << "Total: R$ " << q * 1.50;
		break;
	}
	return 0;
}
