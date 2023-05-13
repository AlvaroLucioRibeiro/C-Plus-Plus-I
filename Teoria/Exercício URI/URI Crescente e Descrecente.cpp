#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int x, y;
	cin >> x >> y;
	//Processamento e saída de dados
	while (x != y)
	{
		if (x > y)
			cout << "Decrescente" << endl;
		else if (x < y)
			cout << "Crescente" << endl;
		cin >> x >> y;
	}
	return 0;
}