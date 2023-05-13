#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma português
//declaração variáveis
double l,a,p;
//entrada de dados
cin>>l;
cin>>a;
//calculos
p = 2*l + 2*a;
//saída de dados
cout<< p <<endl;
return 0;
}