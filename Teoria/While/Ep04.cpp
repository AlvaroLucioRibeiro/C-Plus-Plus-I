#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int i = 0, n, Q1, Q2, Q3, s = 0, r = 0, p = 0, pr = 0;
	//Processamento e Entrada de dados
	do
	{
		i++;
		cout << "Aluno N� " << i << endl;
		cout << "Voc� se sente seguro para volta das aulas presenciais? (1) Sim e (2) N�o" << endl;
		cin >> Q1;
		cout << "Voc� pretende voltar as aulas presenciais digite (1), se prefere continuar nas remotas digite (2)" << endl;
		cin >> Q2;
		cout << "Voc� mora em Santa Rita do Sapuca�? (1) Sim e (2) N�o" << endl;
		cin >> Q3;
		cout << "Suas respostas foram: " << Q1 << ", " << Q2 << ", " << Q3 << endl;
		cout << "\nAlgum novo cadastro, se sim digite 1, se n�o digite 0 e feche o programa!" << endl;
		cin >> n;
		if (Q1 == 1)
			s++;
		if (Q2 == 2)
			r++;
		if (Q3 == 1 && Q2 == 1)
			p++;
		if (Q3 == 2 && Q2 == 1)
			pr++;

	}
	while (n == 1);
	cout << i << " Responderam a pesquisa" << endl;
	cout << (s*100.0) / i << "% se sentem seguro com a volta presencial" << endl;
	cout << (r*100.0) / i << "% pretendem continuar de maneira remota" << endl;
	cout << (p*100.0) / i << "% moram em Santa Rita e querem volta presencial" << endl;
	cout << (pr*100.0) / i << "% n�o moram em Santa Rita e querem volta presencial" << endl;
		 return 0;
}