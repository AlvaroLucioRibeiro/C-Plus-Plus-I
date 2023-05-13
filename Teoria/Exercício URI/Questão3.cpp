#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	char codigo[5]; // Código do consumidor
	char consumo; // Tipo de consumo 1 - residencial ou 2 - comercial
	char energia; // Tipo de energia usada 1 - elétrica , 2 - solar ou 3 - outros
	int i = 0; // Contador
	double r = 0; // Numero de pessoas que usa residencial
	double c = 0; // Numero de pessoas que usa comercial
	double el = 0; // Numero de pessoas que usam energia eletrica
	double so = 0; // Numero de pessoas que usam energia solar
	int n; // Cadastro
	// Entrada e processamento de dados
	do
	{
		i++;
		cout << "Entre com o código do consumidor: ";
		cin.ignore();
		cin.getline(codigo, 5);
		cout << "Entre com tipo de consumo (1) Residencial ou (2) Comercial: ";
		cin >> consumo;
		while (consumo != '1' && consumo != '2')
		{
			cout << "Entre com tipo de consumo (1) Residencial ou (2) Comercial: ";
			cin >> consumo;
		}
		if (consumo == '1')
			r++;
		else if (consumo == '2')
			c++;
		cout << "Fonte Energética utilizada (1) elétrica, (2) solar ou (3) outros: ";
		cin >> energia;
		while (energia != '1' && energia != '2' && energia != '3')
		{
			cout << "Fonte Energética utilizada (1) elétrica, (2) solar ou (3) outros: ";
			cin >> energia;
		}
		if (consumo == '2' && energia == '1')
			el++;
		else if (consumo == '1' && energia == '2')
			so++;
		cout << "Digite 1 para novo cadastro, ou qualquer outra tecla para finalizar: ";
		cin >> n;
	}
	while (n == 1);
	// Saída de dados
	cout << endl;
	cout << "foram pesquisados: " << i << endl;
	cout << "Tipo residencial: " << (r * 100.0) / i << " %" << endl;
	cout << "Tipo comercial: " << (c * 100.0) / i << " %" << endl;
	cout << "Comercios que usam energia eletrica: " << (el * 100.0) / i << " %" << endl;
	cout << "Residencias que usam energia solar: " << (so * 100.0) / i << " %" << endl;
	return 0;
}