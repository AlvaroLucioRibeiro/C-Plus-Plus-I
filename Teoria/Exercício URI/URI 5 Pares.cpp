#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	// Declara��o vari�veis
	int i, p = 0;
	double x;
	// Processamento e sa�da de dados
	for (i = 1; i <= 5; i++)
	{
		cin >> x;
		if ((x%2) == 0)
			p++;
	}
	cout << p << " valores pares" << endl;
	return 0;
}