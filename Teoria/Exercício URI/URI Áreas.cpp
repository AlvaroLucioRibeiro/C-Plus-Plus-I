#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	//declara��o vari�veis
	int A,B,C;
	double tr, ac, at, aq, ar;
	//entrada de dados
	cin >> A >> B >> C;
	//C�lculos 
	tr = (A * C)/2;
	ac = (3.14159 * (C*C));
	at = (A + B)/2 * (C);
	aq = B*B;
	ar = A * B;
	//sa�da de dados
	cout << fixed << setprecision(3) <<endl;
	cout << "TRIANGULO = " << tr << endl;
	cout << fixed << setprecision(3) <<endl;
	cout << "CIRCULO = " << ac << endl; 
	cout << fixed << setprecision(3) <<endl;
	cout << "TRAPEZIO = " << at << endl; 
	cout << fixed << setprecision(3) <<endl;
	cout << "QUADRADO = " << aq << endl; 
	cout << fixed << setprecision(3) <<endl;
	cout << "RETANGULO = " << ar << endl;  
	return 0;	
}