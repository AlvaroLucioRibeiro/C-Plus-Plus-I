#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int A, B, C, D;
	//entrada de dados
	cin >> A >> B >> C >> D;
	//saída de dados
	if ((B > C && D > A) && ((C + D) > (A + B)))
		cout << "Valores aceitos" << endl;
	else
		cout << "Valores não aceitos" << endl;
	return 0;
}
