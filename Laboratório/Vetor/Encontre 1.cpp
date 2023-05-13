#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int ni[50]; // Vetor
	int n; //Numero de entradas
	int i; //Contador
	int x; // Numero a ser calculado porcentagem
	int num = 0; // Porcentagem
	//entrada de dados
	cin >> n;
	//Processamento de dados
	for (i = 0; i < n; i++)
	{
		cin >> ni[i];
	}
	cin >> x;
	for (i = 0; i < n; i++)
	{
		if(ni[i] == x)
			num++;
	}
	//Saída de dados
	cout << fixed << setprecision(2);
	cout << (num * 100.0) / i;
	return 0;
}