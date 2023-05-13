#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	double p; // Preço do produto
	double d; // Valor a ser pago
	int c; // Código do produto
	int i; // Idade
	char cidade[50]; // Nome da cidade
	char nome[50]; // Nome da pessoa
	//entrada de dados
	cin >> c; 
	cin >> p;
	cin.ignore();
	cin.getline(nome, 50);
	cin.ignore();
	cin.getline(cidade, 50);
	cin >> i;
	cin >> d;
	//Processamento de dados
	switch(c)
	{
	case 1:
		cout << "queijo" << endl; 
		cout << fixed << setprecision(2);
		cout << "Valor total= " << p << endl;
		cout << fixed << setprecision(2);
		cout << "Troco = " << d - p << endl;
		break;
	case 2:
		cout << "Geleia" << endl; 
		cout << fixed << setprecision(2);
		cout << "Valor total= " << p << endl;
		cout << fixed << setprecision(2);
		cout << "Troco = " << d - p << endl;
		break;
	case 3:
		cout << "Doce" << endl; 
		cout << fixed << setprecision(2);
		cout << "Valor total= " << p << endl;
		cout << fixed << setprecision(2);
		cout << "Troco = " << d - p << endl;
		break;
	case 4:
		cout << "Refrigerante" << endl;
		cout << fixed << setprecision(2); 
		cout << "Valor total= " << p << endl;
		cout << fixed << setprecision(2);
		cout << "Troco = " << d - p << endl;
		break;
	case 5:
		cout << "Sorvete" << endl; 
		cout << fixed << setprecision(2);
		cout << "Valor total= " << p << endl;
		cout << fixed << setprecision(2);
		cout << "Troco = " << d - p << endl;
		break;
	case 6:
		cout << "Presunto Cru" << endl; 
		cout << fixed << setprecision(2);
		cout << "Valor total= " << p << endl;
		cout << fixed << setprecision(2);
		cout << "Troco = " << d - p << endl;
		break;
	case 7:
		cout << "Vinho" << endl; 
		cout << fixed << setprecision(2);
		cout << "Valor total= " << p << endl;
		cout << fixed << setprecision(2);
		cout << "Troco = " << d - p << endl;
		break;
	default:
		cout << "Codigo Invalido" << endl;
		break;
	}
	return 0;
}