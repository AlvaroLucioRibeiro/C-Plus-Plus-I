#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int A, B, C, D;
	//entrada de dados
	cin >> A >> B >> C >> D;
	//sa�da de dados
	if ((B > C && D > A) && ((C + D) > (A + B)))
		cout << "Valores aceitos" << endl;
	else
		cout << "Valores n�o aceitos" << endl;
	return 0;
}
