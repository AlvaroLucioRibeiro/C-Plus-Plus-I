#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma portugu�s
//declara��o vari�veis
double x, y, xy, voltar;
//entrada de dados
cin>>x;
cin>>y;
//calculos
xy = x*y;
//sa�da de dados
cout<< xy <<endl;
goto voltar;
}