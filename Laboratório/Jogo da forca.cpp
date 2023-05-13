#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	char palavra[80]; // Palavra
	char letra[1]; // Letra
	char secreta[80]; // Secreta
	int tam = 0, i = 0, chances = 6, acertos = 0; //Adicão de dados
	bool acerto = false; //
	//Entrada de dados
	cout << "Fale para seu amigo tampar os olhos, e digite a palavra secreta: ";
	cin >> palavra;
	system("cls");
	while(palavra[i] != '\0') //   \0 = ENTER
	{
		i++;
		tam++;
	}
	for(i = 0; i < 80; i++)
		secreta[i] = '-';
	while((chances > 0) && (acertos < tam))
	{
		cout << "Chances restantes: " << chances << "\n\n";
		cout << "Palavra secreta: ";
		for(i = 0; i < tam; i++ )
			cout << secreta[i];
		cout << "\n\nDigite uma letra: ";
		cin >> letra[0];
		for(i = 0; i < tam; i++)
		{
			if(palavra[i] == letra[0])
			{
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
		if(!acerto)
			chances--;
		acerto = false;
		system("cls");

	}
	//Saída de dados
	if(acertos == tam)
		cout << "voce venceu!";
	else
		cout << "voce perdeu";
	return 0;
}