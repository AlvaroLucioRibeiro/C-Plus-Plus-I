#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double n1, n2; //Número 1 e 2
	char op; // Operador matemático
	//entrada de dados
	cin >> n1;
	cin >> n2;
	cin >> op;
	//Processamento de dados
	if (n2 != 0);
	switch(op)
	{
	case '*':
		cout << n1*n2 << endl;
		break;
	case '/':
		cout << n1 / n2 << endl;
		break;
	case '+':
		cout << n1 + n2 << endl;
		break;
	case '-':
		cout << n1 - n2 << endl;
		break;
	default:
		cout << "impossivel" << endl;
		break;
	}
	return 0;
}