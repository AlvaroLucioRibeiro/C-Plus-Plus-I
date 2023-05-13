#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	int i = 0, inter, gremio, n, in = 0, gr = 0, em = 0;
	//Processamento e Entrada de dados
	do
	{
		i++;
		cin >> inter >> gremio;
		if (inter > gremio)
			gr++;
		else if (inter < gremio)
			in++;
		else if (gremio == inter)
			em++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> n;
	}
	while (n == 1);
	//Saída de dados
	cout << i << " Grenais" << endl;
	cout << "Inter:" << in << endl;
	cout << "Gremio:" << gr << endl;
	cout << "Empate:" << em << endl;
	if  (in > gr)
		cout << "Inter venceu mais" << endl;
	else if (in < gr)
		cout << "Gremio venceu mais" << endl;
	else
		cout << "Nao houve vencedo" << endl;
	return 0;
}
