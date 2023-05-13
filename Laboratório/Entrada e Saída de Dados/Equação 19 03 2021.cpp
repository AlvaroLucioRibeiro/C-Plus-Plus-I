#include <iostream>
#include <cmath>
using namespace std;
#include <iomanip>
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma português
//declaração variáveis
double x,s;
//entrada de dados
cin>>x;
//calculos
s = (pow(x,3) - pow(x,2)) * sqrt(x);
//saída de dados
cout<< fixed << setprecision(2) <<endl;
cout<< s <<endl;
return 0;
}