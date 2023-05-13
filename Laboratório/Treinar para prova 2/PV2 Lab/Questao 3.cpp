#include <iostream>
#include <iomanip>
using namespace std;
void soma(double id, int codigo)
{
	double idade; // idade no país indicado
	while (id != (-1))
	{
		switch(codigo)
		{
		case 1:
			idade = (id * 365) / 88;
			cout << fixed << setprecision(2);
			cout << idade << " anos em mercurio";
			break;
		case 2:
			idade = (id * 365) / 225;
			cout << fixed << setprecision(2);
			cout << idade << " anos em venus";
			break;
		case 3:
			idade = (id * 365) / 365;
			cout << fixed << setprecision(2);
			cout << idade << " anos em terra";
			break;
		case 4:
			idade = (id * 365) / 687;
			cout << fixed << setprecision(2);
			cout << idade << " anos em marte";
			break;
		case 5:
			idade = (id * 365) / 4332;
			cout << fixed << setprecision(2);
			cout << idade << " anos em jupiter";
			break;
		case 6:
			idade = (id * 365) / 10760;
			cout << fixed << setprecision(2);
			cout << idade << " anos em saturno";
			break;
		case 7:
			idade = (id * 365) / 30681;
			cout << fixed << setprecision(2);
			cout << idade << " anos em urano";
			break;
		case 8:
			idade = (id * 365) / 60190;
			cout << fixed << setprecision(2);
			cout << idade << " anos em netuno";
			break;
		}
		cin >> id >> codigo;
	}
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	double idadet; // Idade na terra
	int c; // Código do planeta
	//Entrada de dados
	cin >> idadet;
	cin >> c;
	soma (idadet, c);
	return 0;
}