#include <iostream>
#include <cmath>
using namespace std;
#include <iomanip>
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma portugu�s
//declara��o vari�veis
double salario,vendas,total;
string nome;
//entrada de dados
cin>>nome;
cin>>salario;
cin>>vendas;
//calculos
total= salario + vendas*0.15;
//sa�da de dados
cout<< fixed << setprecision(2) <<endl;
cout<< "Total = R$"<< total <<endl;
return 0;
}