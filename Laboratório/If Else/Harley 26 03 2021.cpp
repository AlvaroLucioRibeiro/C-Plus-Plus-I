#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese");
//declara��o vari�veis
int x,y,z, vx,vy,vz;
//entrada de dados
cin>>x; //Moto 1
cin>>y; //Moto 2
cin>>z; //Moto 3
//C�lculos
vx = 10 * x - (4/3*x); //C�lculo Moto 1
vy = 10 * y - (4/3*y); //C�lculo Moto 2
vz = 10 * z - (4/3*z); //C�lculo Moto 3 
//sa�da de dados
if ((vx > vy) && (vx > vz))
	cout << "Moto 1" << endl; // Moto 1 mais r�pida
if ((vy > vx) && (vy > vz))
	cout << "Moto 2" << endl; // Moto 2 mais r�pida
if ((vz > vx) && (vz > vy))
	cout << "Moto 3" << endl; // Moto 3 mais r�pida
return 0;
}