#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	double n1, n2; //N�mero 1 e 2
	char op; // Operador matem�tico
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