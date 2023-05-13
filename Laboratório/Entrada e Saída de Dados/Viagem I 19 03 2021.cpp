#include <iostream>
using namespace std;
#include <iomanip>
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma português
//declaração variáveis
double t, v,s;
//entrada de dados
cin>>t;
cin>>v;
//calculos
s = t*v/12;
//saída de dados
cout<< fixed << setprecision(3) <<endl;
cout<< s << " litro(s)."<<endl;
return 0;
}