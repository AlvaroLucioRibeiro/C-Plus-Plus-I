#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de variav�l
	int n=0, soma=0;
	//Processamento de dados
	while (n != -1)
	{
		soma = soma + n;
		cin >> n; 
	}
	//Sa�da de dados
	cout << soma << endl;
	return 0;
}