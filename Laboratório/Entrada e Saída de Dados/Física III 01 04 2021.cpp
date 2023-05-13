#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double K = 100, Q1, Q2,D,F;
	//entrada de dados
	cout << "Digite o valor de Q1: ";
	cin >> Q1;
	cout << "Digite o valor de Q2: ";
	cin >> Q2;
	cout << "Digite o valor rde D: ";
	cin >> D;
	//calculos
	F = K * (Q1 * Q2 / pow(D,2));
	//saída de dados
	cout << fixed << setprecision(2);
	cout << "F = " << F << endl;
	return 0;
}