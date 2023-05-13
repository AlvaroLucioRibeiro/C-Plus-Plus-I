#include <iostream>
using namespace std;
int main( )
{ setlocale(LC_ALL, "Portuguese");
//declaração variáveis
char nome1[20];
int idade1;
char nome2[20];
int idade2;
string nome;
//entrada de dados
cin.get(nome1,20);
cin>>idade1;
cin.ignore();
cin.get(nome2,20);
cin>>idade2;
//saída de dados
if (idade1>idade2)
    cout << nome1 << endl;
if (idade1<idade2)
    cout << nome2 << endl;
if (idade1==idade2)
    cout << "Idades iguais" << endl;
return 0;
}