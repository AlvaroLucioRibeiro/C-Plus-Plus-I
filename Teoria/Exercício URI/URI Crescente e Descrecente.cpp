#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int x, y;
	cin >> x >> y;
	//Processamento e sa�da de dados
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