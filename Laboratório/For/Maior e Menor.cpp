#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int n, i, x;
	int maior = -999999, menor = 999999;
	//Entrada de dados
	cin >> n;
	//sa�da de dados
	for (i=0; i <n; i++)
	{
		cin >> x;
	
		if (x >= maior)
			maior = x; 
		if (x <= menor)
			menor = x;
	}
	cout << "Maior: " << maior << endl;	
	cout << "Menor: " << menor << endl;	
	return 0;
}