#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int i, p=0;
	float x;
	//PRocessamento e sa�da de dados
	for (i=0; i <6; i++)
	{
		cin >> x;
		if (x > 0)
			p++;
	}
	cout << p << " valores positivos" << endl;
	return 0;
}