#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	char nome[20];
	double x,y;
	//entrada de dados
	cin.get (nome,20);
	cin >> x;
	//calculos
	y = x * 2.908;
	//saída de dados
	cout << nome << endl;
	cout << fixed << setprecision(2);
	cout << "R$: " << y << endl;
	return 0;
}