#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de dados
	int i;
	//Sa�da de dados
	for (i= 50; i>=1; i--)
	{
		cout << i << endl;
	}
	cout << " " << i;
	return 0;
}