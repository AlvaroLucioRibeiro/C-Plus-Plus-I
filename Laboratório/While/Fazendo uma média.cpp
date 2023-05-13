#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variavél
	int n, q=0;
	float media=0, soma=0; 
	//Entrada de dados
	cin >> n;
	//Processamento de dados
	while (n >= 0)
	{
		
		soma = soma + n;
		q = q + 1;
		cin >> n;
	}
	//Calculos 
		media = soma / q;
	//Saída de dados
	cout << fixed << setprecision(2);
	cout << media << endl;
	return 0;
}