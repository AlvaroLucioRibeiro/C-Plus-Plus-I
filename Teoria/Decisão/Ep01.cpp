#include <iostream>
#include <cmath>
using namespace std;
int main( )
{	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double t, x;
	//Entrada de Dados
	cout << "Digite o valor de T:";
	cin >> t;
	//Calculos e Saída de Dados
	if (t >= -1 && t <= 1)
		(x)= 1-abs(t);
	
	else 
		x = 0;
	cout << "x(t) = " << x << endl;
	return 0;
}