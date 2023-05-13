#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	int i = 0, n, nota1, nota2;
	//Processamento e Entrada de dados
	do
	{
		i++;
		cin >> nota1 >> nota2;
		if (nota1 < 0 || nota1 > 10)
		{
			cout << "nota invalida" << endl;
		}
		cout << fixed << setprecision(2);
		cout << "media= " << (nota1+nota2)/2.0 << endl;
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> n;
	}
	while (n == 1);
	return 0;
}