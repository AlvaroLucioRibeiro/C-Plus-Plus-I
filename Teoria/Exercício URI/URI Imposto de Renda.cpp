#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Declaração de variáveis
	int x, y, a, s = 0, i;
	// Entrada de dados
	cin >> x >> y;
	// Processamento
	if(x > y)
	{
		a = x;
		x = y;
		y = a;
	}
		x++;
	if(x % 2 == 0)
		x++;
	for(i = x; i < y; i = i + 2)
	{
		s = s + i;
	}
	// Saída de dados
	cout << s << endl;
	return 0;
}
