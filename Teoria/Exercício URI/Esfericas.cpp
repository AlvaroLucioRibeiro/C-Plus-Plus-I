#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void CONVERTE(double a, double b, double c, double &p, double &teta, double &fi)
{
	p = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2)); //Calculo do Ro
	teta = (atan(b / a)) * (180 / 3.14159); // Calculo de Teta
	fi = (acos(c / p)) * (180 / 3.14159); // Calculo de fi
	return;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Declaração de Variaveis
	double x, y, z, p, teta, fi; // Valores de X, Y e Z
	cout << "Entre com os valores da coordenadas retangulares: ";
	cin >> x >> y >> z;
	CONVERTE (x, y, z, p, teta, fi);
	//Saída de dados
	cout << "Os valores em coordenadas esféricas: ";
	cout << fixed << setprecision(0);
	cout << "P(" << p << ";" << teta << ";" << fi << ")" << endl;
	return 0;
}