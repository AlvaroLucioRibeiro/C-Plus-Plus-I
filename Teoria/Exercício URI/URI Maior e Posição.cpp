#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int i, x, p, maior = 0;
	//Processamento e sa�da de dados
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