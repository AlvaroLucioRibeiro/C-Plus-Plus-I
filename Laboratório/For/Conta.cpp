#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int i, x, p=0;
	float s=0, m;
	//PRocessamento e saída de dados
	for (i=0; i <10; i++)
	{
		cin >> x;
	
		if (x > 0)
		{
			p++;
		}
	    s = s + x;
		m = s/10;
	}
	cout << "Positivos = " << p << endl;
	cout << fixed << setprecision(2);
	cout << "Media = " << m << endl;
	return 0;
}