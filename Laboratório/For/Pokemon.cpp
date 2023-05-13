#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n, pokebola, forca, i;
	double pokebolat = 0, forcat = 0;
	char nome[90];
	//entrada
	cin >> n;
	//saída de dados
	for (i = 1; i <= n; i++)
	{
		cin.ignore();
		cin.getline(nome,90);
		cin >> pokebola;
		pokebolat = pokebolat + pokebola;
		cin >> forca;
		forcat = forcat + forca;
	}
	if ( n == 0)
	{
		cout << "Total de pokebolas = " << pokebolat << endl;
		cout << "Media de forca = " << forcat << endl;
	}
	else if (n !=0)
	{
	   	cout << "Total de Pokebolas = " << pokebolat << endl;
		cout << fixed << setprecision(2) << endl;
		cout << "Media de forca = " << forcat / n << endl;
	}
	return 0;
}