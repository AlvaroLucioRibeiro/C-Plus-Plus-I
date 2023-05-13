#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int DDD;
	//entrada de dados
	cin >> DDD;
	//saída de dados
	if (DDD == 11)
		cout << "Sao Paulo" << endl;
	else	if (DDD == 61)
		cout << "Brasilia" << endl;
	else if (DDD == 71)
		cout << "Salvador" << endl;
	else if (DDD == 21)
		cout << "Rio de Janeiro" << endl;
	else if (DDD == 32)
		cout << "Juiz de Fora" << endl;
	else if (DDD == 19)
		cout << "Campinas" << endl;
	else if (DDD == 27)
		cout << "Vitoria" << endl;
	else if (DDD == 31)
		cout << "Belo Horizonte" << endl;
	else 
		cout << "DDD nao cadastrado" << endl;
	return 0;
}