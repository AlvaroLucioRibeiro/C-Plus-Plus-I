#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int x,y,c;
	double p, custo;
	//entrada de dados
	cout << "Digite quantas notas ser� dadas: ";
	cin >> x;
	cout << "Digite o valor das notas: ";
	cin >> y;
	cout << "Digite quantos chocolates ser�o comprados: ";
	cin >> c;
	cout << "Digite quanto curta o chocolate: ";
	cin >> p;
	//calculos
	custo = (x * y) - (c * p);
	//sa�da de dados
	cout << fixed << setprecision(2);
	cout << "R$ = " << custo << endl;
	return 0;
}