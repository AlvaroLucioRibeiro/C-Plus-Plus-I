#include <iostream>
using namespace std;
int FAT(int a)
{
	int i; // Contador
	int so = 1; // Fatorial
	int s; // Resultado
	//Calculo do Fatorial
	for (i = 1; i <= a; i++)
	{
		so = so * i;
	}
	s = so;
	return s;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de Variaveis
	int N; // Fatorial
	int resultado;//Resultado
	cout << "Entre com o n�mero a ser fatorado: ";
	cin >> N;
	while (N < 0)
	{
		cin >> N;
	}
	resultado = FAT(N);
	// Sa�da de dados
	cout << "O resultado do fatorial �: ";
	cout << resultado << endl;
	return 0;
}