#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma portugu�s
//declara��o vari�veis
double l,a,p;
//entrada de dados
cin>>l;
cin>>a;
//calculos
p = 2*l + 2*a;
//sa�da de dados
cout<< p <<endl;
return 0;
}