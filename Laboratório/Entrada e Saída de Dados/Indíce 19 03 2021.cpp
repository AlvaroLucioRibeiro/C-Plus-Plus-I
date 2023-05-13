#include <iostream>
#include <cmath>
using namespace std;
#include <iomanip>
int main( )
{ setlocale(LC_ALL, "Portuguese"); //Uso do idioma português
//declaração variáveis
double idade, ind;
string nome;
//entrada de dados
cin>>idade;
cin>>nome;
//Resolução
ind = (idade * 1/42) - (idade - 3);
//saída de dados
cout<< fixed << setprecision(4) <<endl;
cout<< "ind ="<< ind <<endl;
return 0;
}