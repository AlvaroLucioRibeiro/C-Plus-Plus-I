#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	double x1, x2, y1, y2, d;
	//entrada de dados
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	//C�lculos 
	d = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	//sa�da de dados
	cout << fixed << setprecision(4);
	cout << d << endl;  
	return 0;	
}