#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int x, y, z;
	//Entrada de dados
	cin >> x >> y >> z;
	//sa�da de dados
	if (x >> y && z)
		cout << x << endl << y << endl << z << endl;
	else if (y >> x && z)
		cout << y << endl << x << endl << z << endl;
	else if (z >> y && x)
		cout << z << endl << y << endl << y << endl; 
	return 0;
}