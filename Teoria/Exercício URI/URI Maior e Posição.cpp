#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int i, x, p, maior = 0;
	//Processamento e saída de dados
	for (i = 1; i <=100; i++)
	{
		cin >> x;
		if (x >= maior)
		{
			maior = x;
			p = i;
		}
	}
	cout << maior << endl;
	cout << p << endl;
	return 0;
}