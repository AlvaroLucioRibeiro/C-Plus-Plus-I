#include <iostream>
#include <cmath>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	double x = 1, s = 0, d = 50;
	int i;
	//entrada
	cout << "Entre com o valor de X:";
	cin >> x;
	//sa�da de dados
	if (x == 0)
		cout << "Imposs�vel calcular este tipo de Fun��o!" << endl;
	else
	{
		for (i = 1; i <= 50; i++)
		{
			s = s + (pow(x, i) / d);
			d = d - 1;
		}
		cout << "F(x)= " << s << endl;
	}
	return 0;
}