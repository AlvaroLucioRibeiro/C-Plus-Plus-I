#include <iostream>
#include <cmath>
using namespace std;
#include <iomanip>
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma portugu�s
//declara��o vari�veis
double x,s;
//entrada de dados
cin>>x;
//calculos
s = (pow(x,3) - pow(x,2)) * sqrt(x);
//sa�da de dados
cout<< fixed << setprecision(2) <<endl;
cout<< s <<endl;
return 0;
}