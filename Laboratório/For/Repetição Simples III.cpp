#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de dados
	int i;
	//Sa�da de dados
	for (i = 1; i <= 100; i = i + 1)
	{
		if (((i % 3) == 0) && ((i % 2) == 0))
			cout << i << endl;
	}
	return 0;
}
