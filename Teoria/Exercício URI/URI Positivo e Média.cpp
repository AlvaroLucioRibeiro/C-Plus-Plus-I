#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int i, p = 0;
	float s = 0, x, m;
	//PRocessamento e sa�da de dados
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