#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	int i = 0, n;
	char nome[51], CPF [12], estado [3];
	float mg = 0, es = 0;
	//Processamento
	do
	{
		i++;
		cout << "\nCadastro (" << i << "):" << endl; //Cadastro
		cout << "Nome: "; //Nome
		cin.ignore();
		cin.getline(nome, 51);
		cout << "Digite seu CPF (Apenas números): "; //CPF
		cin.getline(CPF, 12);
		cout << "Digite o Estado de origem: "; //Estado
		cin.getline(estado, 3);
		//Comparações
		if(strcmp(estado, "mg") == 0)
			mg++;
		else
			es++;
		//Saída dos dados
		cout << "Digite (1) para continuar um novo cadastro ou (0) para encerrar: ";
		cin >> n;
	}
	while (n == 1);
	//Resultados
	cout << fixed << setprecision(2);
	cout << (mg / i) * 100 << " % são do estado de Minas Gerais!" << endl;
	cout << fixed << setprecision(2);
	cout << (es / i) * 100 << " % são dos outros estados!" << endl;
	return 0;
}