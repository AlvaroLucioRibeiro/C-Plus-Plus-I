#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int n, i, nota;
	float n1=0, n2=0, n3=0;
	//entrada de dados
	cin >> n;
	//Processamento
	for (i=1; i<=n; i++){
		cout << "Você aprova as ações do governo federal com relação à pandemia?:" << endl;
		cout << "(1) Sim!" << endl;
		cout << "(2) Não!" << endl;
		cout << "(3) Não sei opinar!" << endl;
		cin >> nota;
		if (nota == 1)
			n1++;
			else if (nota == 2)
				n2++;
				else if (nota == 3)
						n3++;
	}
	//saída de dados
 	cout << " " << n1 << "Pessoas concordam com o governo, " << (n1/n)*(100) << "% é seu percentual" << endl;
 	cout << " " << n2 << "Pessoas discordam do governo, " << (n2/n)*(100) << "% é seu percentual" << endl;
 	cout << " " << n3 << "Pessoas não sabem opinar sobre o governo, " << (n3/n)*(100) << "% é seu percentual" << endl;
	
	return 0;
}