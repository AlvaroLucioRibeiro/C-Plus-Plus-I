#include <iostream>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de dados
	int i;
	//Saída de dados
	for (i= 50; i>=1; i--)
	{
		cout << i << endl;
	}
	cout << " " << i;
	return 0;
}