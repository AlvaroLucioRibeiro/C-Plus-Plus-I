#include <iostream>
#include <cmath>
using namespace std;
int main( )
{	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double x,y,xy;
	//Entrada de Dados
	cout << "Digite o valor de X: ";
	cin >> x;
	cout << "Digite o valor de Y: ";
	cin >> y;
	//Calculos e Saída de Dados
	if (x > y) {
		xy= (pow(x,2) - pow(y,2) + (2*x*y));
		cout << "f(x,y) = " << xy << endl;
	}
	if (x < y) {
		xy= (pow(y,2) + pow(x,2) + (2*x*y));
		cout << "f(x,y) = " << xy << endl;
	}
	if (x == y) {
		xy= ((2*x*y) + x + y);
		cout << "f(x,y) = " << xy << endl;
	}
	return 0;
}