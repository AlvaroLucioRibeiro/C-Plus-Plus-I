#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double n, i, soma, media;
	//saída de dados
	for (i = 1; i <= 10; i++)
	{
		cin >> n;
		soma = soma + n;
		media = soma / 10;
	}
	if (n == 0)
	{
		cout << fixed << setprecision(2);
		cout << n << endl;
		
	}
	else if (n !=0)
	{
	cout << fixed << setprecision(2);
	cout << media << endl;
	}
	return 0;
}