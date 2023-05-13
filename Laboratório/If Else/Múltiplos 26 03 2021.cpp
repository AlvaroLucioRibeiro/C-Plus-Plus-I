#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese");
//declaração variáveis
int x,y;
//entrada de dados
cin>>x;
cin>>y;
//saída de dados
if (x>=y)
    cout << "Sim" << endl;
else
    cout << "Nao" << endl;
return 0;
}