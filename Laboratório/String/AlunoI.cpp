#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	char nome[50]; // Nome do aluno
	int matricula; //Matricula do aluno
	int i = 0; // Contador
	double nota1, nota2; // Notas do aluno
	double media = 0; // Media
	double mediageral = 0; //Media Geral
	double maior = -9999, menor = 9999; // Maior media e menor
	char ma[50], me[50]; // Maior nome e menor
	int resultado; // Comparação
	//entrada de dados
	cin.getline(nome, 50);
	resultado = strcmp(nome, "SAIR");
	if (resultado == 0)
		cout << "Programa Finalizado";
	else
	{
		while(resultado != 0)
		{
			i++;
			cin >> matricula;
			cin >> nota1;
			while(nota1 < 0 || nota1 > 100)
			{
				cin >> nota1;
			}
			cin >> nota2;
			while(nota2 < 0 || nota2 > 100)
			{
				cin >> nota2;
			}
			media = (nota1 + nota2) / 2;
			cout << "Aluno: " << nome << endl;
			cout << "Mat: " << matricula << endl;
			cout << fixed << setprecision(2);
			cout << "Media: " << media << endl;
			if (media > maior)
			{
				maior = media;
				strcpy(ma, nome);
			}
			if (media < menor)
			{
				menor = media;
				strcpy(me, nome);
			}
			mediageral = mediageral + media;
			cin.ignore();
			cin.getline(nome, 50);
			resultado = strcmp(nome, "SAIR");
		}
		//saída de dados
		cout << fixed << setprecision(2);
		cout << "Media Geral: " << mediageral / i << endl;
		cout << "Maior Media: " << maior << " - " << ma << endl;
		cout << "Menor media: " << menor << " - " << me << endl;
	}
	return 0;
}
