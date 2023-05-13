#include <iostream>
#include <cmath>
using namespace std;
#include <iomanip>
int main( )
{ setlocale(LC_ALL, "Portuguese"); //seta uso do idioma português
//declaração variáveis
double salario,vendas,total;
string nome;
//entrada de dados
cin>>nome;
cin>>salario;
cin>>vendas;
//calculos
total= salario + vendas*0.15;
//saída de dados
cout<< fixed << setprecision(2) <<endl;
cout<< "Total = R$"<< total <<endl;
return 0;
}