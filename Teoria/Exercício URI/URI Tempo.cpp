#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declaração variáveis
	int x, h, m, s;
	//entrada de dados
	cin >> x;
	//Cálculos 
	h = x/3600;
	m = (x - (h * 3600)) / 60;
	s = x%60;
	//saída de dados
	cout << h << ":" << m << ":" << s << endl;  
	return 0;	
}