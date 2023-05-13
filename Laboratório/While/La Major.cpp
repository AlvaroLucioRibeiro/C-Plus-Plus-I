#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variavél
	int n, i = 0, x, maior = 0;
	//Entrada de dados
	cin >> n;
	//Processamento de dados
	while (i < n)
	{
		do
		{
			cin >> x;
		}
		while (x < 0);
		if (x >= maior)
			maior = x;
		i++;
	}
	//Saída de dados
	cout << maior << endl;
	return 0;
}