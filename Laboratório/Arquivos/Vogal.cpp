#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	ifstream arquivos; // Nome do Arquivo
	char vogal; //Vogal
	int nvogal = 0; // Numero de vogal
	//Processamento de dados
	arquivos.open("arquivo.txt", ifstream::in);
	while(!arquivos.eof())
	{
		arquivos >> vogal;
		switch (vogal)
		{
		case 'a':
			nvogal++;
			break;
		case 'e':
			nvogal++;
			break;
		case 'i':
			nvogal++;
			break;
		case 'o':
			nvogal++;
			break;
		case 'u':
			nvogal++;
			break;
		}
	}
	arquivos.close();
	//Saída de dados
	cout << nvogal << endl;
	return 0;
}
