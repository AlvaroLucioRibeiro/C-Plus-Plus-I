#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int n, i, pv1, pv2, m;
	//entrada de dados
	cout << "Entre com o n�mero de alunos:" <<endl;
	cin >> n;
	//Processamento de dados
	while (n <=0)
	{
		cout << "N�o existe alunos negativos, digite novamente:";
		cin>> n;
	}
	while (n > 0)
	{
	{
		cout << "Digite os valores das provas:";
		cin >> pv1 >> pv2; 
		
		if (pv1 >=0 && pv1<=100 || pv2 >=0 && pv2<=100){
			m = (pv1+pv2)/2;
			cout << "M�dia" << m << endl;
		}
		else
			cout << "#ERRO#" << endl;
	}
	if (m > 60)
		cout << "APROVADO! PARAB�NS" << endl;
	else 
		cout << "REPROVADO!!" << endl;
	}
	//sa�da de dados
	
	return 0;
}