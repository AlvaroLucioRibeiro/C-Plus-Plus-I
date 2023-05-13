#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
//declaração variáveis
	double a, b, c, x, x1, x2;
//entrada de dados
	cin >> a; //A
	cin >> b; //B
	cin >> c; //C
//Cálculos
	x = (b * b) - 4 * a * c;
//saída de dados
	if ((a == 0) || (x < 0))
		cout << "Impossivel" << endl;
	else
	{
		x1 = (-b + sqrt(x)) / (2 * a);
		x2 = (-b - sqrt(x)) / (2 * a);
		cout << fixed << setprecision(5) << endl;
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	return 0;
}
