#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese");
//declara��o vari�veis
int x,y;
//entrada de dados
cin>>x;
cin>>y;
//sa�da de dados
if (x>=y)
    cout << "Sim" << endl;
else
    cout << "Nao" << endl;
return 0;
}