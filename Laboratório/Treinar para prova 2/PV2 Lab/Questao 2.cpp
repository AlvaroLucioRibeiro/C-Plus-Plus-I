#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Declaração de Variaveis
	char Estilo[50]; // Estilo musical
	int resultado; // Comparação
	int i = 0, c = 0, rock = 0, kpop = 0, mpb = 0; // Contador
	//Processamento de dados
	for (i = 0; i < 10; i++)
	{
		cin >> Estilo;
		resultado = strcmp(Estilo, "SAIR");
		while(resultado != 0)
		{
			cin >> Estilo;
			if (strcmp(Estilo, "ROCK") == 0)
				rock++;
			else if (strcmp(Estilo, "MPB") == 0)
				mpb++;
			else if (strcmp(Estilo, "K-POP") == 0)
				kpop++;
			resultado = strcmp(Estilo, "SAIR");
			c = kpop + mpb + rock;
		}
	}
	// Saída de dados
	cout << "Estilo Musical: " << Estilo << endl;
	cout << "Total de votos para ROCK: " << rock << endl;
	cout << "Total de votos: " << c << endl;
	return 0;
}