#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double x,y,z,xx,yy,zz;
	//entrada de dados
	cout << "Digite os valores em R$: " 
	cin >> x;
	cin >> y;
	cin >> z;
	//calculos
	xx = x / 4.04;
	yy = y / 5.32;
	zz = z / 4.60;
	//saída de dados
	cout << fixed << setprecision(2);
	cout << "Dolar: " << xx << endl;
	cout << fixed << setprecision(2);
	cout << "Libra: " << yy << endl;
	cout << fixed << setprecision(2);
	cout << "Euro: " << zz << endl;
	return 0;
}