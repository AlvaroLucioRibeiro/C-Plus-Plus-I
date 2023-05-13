#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de dados
	int i;
	//Saída de dados
	for (i = 1; i <= 100; i = i + 1)
	{
		if (((i % 3) == 0) && ((i % 2) == 0))
			cout << i << endl;
	}
	return 0;
}
