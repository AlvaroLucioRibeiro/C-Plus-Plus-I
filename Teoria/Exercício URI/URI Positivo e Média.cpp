#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int i, p = 0;
	float s = 0, x, m;
	//PRocessamento e saída de dados
	for (i = 1; i <= 6; i++)
	{
		cin >> x;
		if (x > 0)
		{
			p++;
			s = s + x;
		}
		m = s / p;
	}
	cout << p << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << m;
	return 0;
}