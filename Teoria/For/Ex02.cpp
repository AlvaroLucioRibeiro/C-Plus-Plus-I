#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variavél
	double n = 3, s = 1, d = 1, si = 1;
	int i, j;
	//Desenvolvimento de dados
	for (i = 1; i <= 4; i++)
	{
		d = 1;
		for (j = 2; j <= n; j++)
			d = d * j; //Calculo do denominador
		s = s + n / d * (si); //Soma total
		si = si * (-1); //Calculo de sinal
		n = n + 2;
	}
	//Saída de dados
	cout << fixed << setprecision(5);
	cout << "F(x)= " << s << endl;
	return 0;
}
