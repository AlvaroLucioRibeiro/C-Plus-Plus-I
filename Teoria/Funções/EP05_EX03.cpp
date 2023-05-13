#include <iostream>
using namespace std;
int FAT(int x)
{
	int i; // Contador
	int so = 1; // Fatorial
	int s; // Resultado
	//Calculo do Fatorial
	for (i = 1; i <= x; i++)
	{
		so = so * i;
	}
	s = so;
	return s;
}
int Combina(int M, int P)
{
	int c; // Resultado Final
	if (M < P)
		c = 0;
	else
		c = FAT(M) / (FAT(M - P) * FAT(P));
	return c;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	int M, P; // Valores da analise combinatória
	int resultado;//Resultado
	cout << "Entre com o valor de M e P: ";
	cin >> M >> P;
	resultado = Combina(M, P);
	// Saída de dados
	cout << "O resultado da analise combinatória é: ";
	cout << resultado << endl;
	return 0;
}
