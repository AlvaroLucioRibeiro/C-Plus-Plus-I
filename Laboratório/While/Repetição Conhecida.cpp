#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double x = 1, s = 0, i=1;
	//entrada
	cin >> x;
	//saída de dados
	while (i <= x)
		{
			s = s + (1 / i);
			i++;
	   	}
	cout << fixed << setprecision(4);
	cout << s << endl;
	return 0;
}