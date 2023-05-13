#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma português
//declaração variáveis
double x, y, xy, voltar;
//entrada de dados
cin>>x;
cin>>y;
//calculos
xy = x*y;
//saída de dados
cout<< xy <<endl;
goto voltar;
}