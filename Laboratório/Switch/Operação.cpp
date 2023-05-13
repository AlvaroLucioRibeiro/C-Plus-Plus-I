#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double x, y; // Valores de X e Y 
	char op; // Operador Matemático
	//entrada de dados
	cin >> op;
	cin >> x;
	cin >> y;
	//Processamento de dados
	switch(op)
	{
	case '/':
		cout << fixed << setprecision(1);
		cout << x/5 << endl;
		break;
	case '+':
		cout << fixed << setprecision(1);
		cout << pow(y,2) + 2 << endl;
		break;
	case '-':
		cout << fixed << setprecision(1);
		cout << x-y << endl;
		break;
	case *:
		cout << fixed << setprecision(1);
		cout << 2*(x-y) << endl;
		break;
	default:
		cout << "entrada invalida" << endl;
		break;
	}
	return 0;
}