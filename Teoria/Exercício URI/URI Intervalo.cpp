#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	double x;
	cin >> x;
	//Processamento e sa�da de dados
	if(x >= 0.0 || x <= 25.0)
		cout << "Intervalo [0,25]";
	else if (x > 25.0 || x <= 50.0)
			cout << "Intervalo (25,50]";
	else if (x > 50.0 || x <= 75.0)
			cout << "Intervalo (50,75]";
	else if (x > 75.0 || x <= 100.0)
			cout << "Intervalo (75,100]";
		 else
		 cout << "Fora de intervalo";
	return 0;
}