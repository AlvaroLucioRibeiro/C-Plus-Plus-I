#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese");
//declaração variáveis
int x,y,z, vx,vy,vz;
//entrada de dados
cin>>x; //Moto 1
cin>>y; //Moto 2
cin>>z; //Moto 3
//Cálculos
vx = 10 * x - (4/3*x); //Cálculo Moto 1
vy = 10 * y - (4/3*y); //Cálculo Moto 2
vz = 10 * z - (4/3*z); //Cálculo Moto 3 
//saída de dados
if ((vx > vy) && (vx > vz))
	cout << "Moto 1" << endl; // Moto 1 mais rápida
if ((vy > vx) && (vy > vz))
	cout << "Moto 2" << endl; // Moto 2 mais rápida
if ((vz > vx) && (vz > vy))
	cout << "Moto 3" << endl; // Moto 3 mais rápida
return 0;
}