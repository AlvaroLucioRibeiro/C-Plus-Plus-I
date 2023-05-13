#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int x,y,c;
	double p, custo;
	//entrada de dados
	cout << "Digite quantas notas será dadas: ";
	cin >> x;
	cout << "Digite o valor das notas: ";
	cin >> y;
	cout << "Digite quantos chocolates serão comprados: ";
	cin >> c;
	cout << "Digite quanto curta o chocolate: ";
	cin >> p;
	//calculos
	custo = (x * y) - (c * p);
	//saída de dados
	cout << fixed << setprecision(2);
	cout << "R$ = " << custo << endl;
	return 0;
}