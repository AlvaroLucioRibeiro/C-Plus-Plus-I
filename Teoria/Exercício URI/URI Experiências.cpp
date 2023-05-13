#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	// Declaração de variáveis
	int n1, n2, i, c = 0, r = 0, s = 0, t = 0;
	char cobaia;
	// Entrada de dados
	cin >> n1;
	// Processamento
	for(i = 1; i <= n1; i++)
	{
		cin >> n2 >> cobaia;
		switch (cobaia)
		{
		case 'c':
			c = c + n2;
			break;
		case 's':
			s = s + n2;
			break;
		case 'r':
			r = r + n2;
			break;
		}
		t = t + n2;
	}
	// Saída de dados
	cout << fixed << setprecision(2);
	cout << "Total: " << t << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << "Percentual de coelhos: " << 100.0 * c / t << " %" << endl;
	cout << "Percentual de ratos: " << 100.0 * r / t << " %" << endl;
	cout << "Percentual de sapos: " << 100.0 * s / t << " %" << endl;

	return 0;
}
