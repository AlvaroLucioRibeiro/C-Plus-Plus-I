#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de dados
	int i;
	//Saída de dados
	for (i=1; i<50; i=i+1)
	{
		i = i+1;
		cout << i << endl;
	}
	return 0;
}