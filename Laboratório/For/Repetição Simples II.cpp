#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de dados
	int i;
	//Sa�da de dados
	for (i=1; i<50; i=i+1)
	{
		i = i+1;
		cout << i << endl;
	}
	return 0;
}