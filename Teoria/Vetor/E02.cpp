#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int n; // numero ate 10
	int numero[10];//Vetor
	int x; //Se esta ou n�o no vetor
	int i; //Contador
	int aux = 0;//Auxiliar
	//Entrada e sa�da de dados
	cout << "Digite quantidade de n�meros: ";
	cin >> n;
	while (n > 10)
	{
		cin >> n;
	}
	cout << "Digite os numeros: ";
	for (i = 0; i < n; i++)
	{
		cin >> numero[i];
	}
	cout << "Entre com o valor de X: ";
	cin >> x;
	for (i = 0; i < n; i++)
	{
		if (x == numero[i])
		{
			cout << "Valor pertence ao vetor" << endl;
			aux++;
		}
	}
	if (aux == 0)
		cout << "Valor n�o pertence ao vetor" << endl;
	return 0;
}
