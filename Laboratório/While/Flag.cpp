#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double n;  //Altura
	double soma = 0, media = 0; //Soma e Média das alturas das mulheres
	double menor = 100; //Menor Altura
	int h = 0, m = 0; //Quantidade de homens (h) e mulheres (m)
	int s; // Sexo - (1) Homens e (2) Mulheres
	//Entrada e processamento de dados
	cin >> n;
	while (n != -1)
	{
		cin >> s;
		if (s == 1)
			h++;
		if (n <= menor)
			menor = n;
		if (s == 2)
		{
			soma = soma + n;
			m++;
		}
		cin >> n;
	}
	media = soma / m;
	//saída de dados
	cout << h << " Hom." << endl;
	cout << "Menor altura: " << menor << endl;
	cout << fixed << setprecision(2);
	cout << "Média: " << media;

	return 0;
}