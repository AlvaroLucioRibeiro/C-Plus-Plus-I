#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int x, h, m, s;
	//entrada de dados
	cin >> x;
	//C�lculos 
	h = x/3600;
	m = (x - (h * 3600)) / 60;
	s = x%60;
	//sa�da de dados
	cout << h << ":" << m << ":" << s << endl;  
	return 0;	
}