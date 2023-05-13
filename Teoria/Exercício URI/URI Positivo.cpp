#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int i, p=0;
	float x;
	//PRocessamento e saída de dados
	for (i=0; i <6; i++)
	{
		cin >> x;
		if (x > 0)
			p++;
	}
	cout << p << " valores positivos" << endl;
	return 0;
}