#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int x, y, z, a, b, c, i;
	cin >> a >> b >> c;
	x = a;
	y = b;
	z = c;
	//Processamento e saída de dados
	if (x > y)
	{
		i = x;
		x = y;
		y = i;
	}
	if (x > z)
	{
		i = x;
		x = z;
		z = i;
	}
	if (y > z)
	{
		i = y;
		y = z;
		z = i;
	}
	// Saída de Dados
	cout << x << endl << y << endl << z << endl;
	cout << endl;
	cout << a << endl << b << endl << c << endl;
	return 0;
}