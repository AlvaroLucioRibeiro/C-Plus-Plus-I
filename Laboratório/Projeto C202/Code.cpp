/*
Projeto de C202 - L5
Alunos: Matheus Ferreira Silva, Henrique Lopes Ferreira e Álvaro Lúcio Almeida
Ribeiro.
*/
/*----------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;

/*----------------------------------------------------------------------------*/

int main()
{
	ifstream arq; //Input file variable

	int array[100]; //Priority column
	int greatest_element; //Auxiliary variable

	int data[100][3]; //Matrix that stores input data
	int i = 0; //Auxiliary variable
	int j = 0; //Auxiliary variable
	int a = 0; //Auxiliary variable
	int input_amount = 1; //Amount of inputs
	int ms = 0; //Previous time values

	float average_time = 0; //Holding average time
	/*------------------------------------------------------------------------*/
	arq.open("prioridade.txt", ifstream::in);
	/*------------------------------------------------------------------------*/
	//Input:

	arq >> data[0][0];
	arq >> data[0][1];
	arq >> data[0][2];
	i++;

	while(!arq.eof())
	{
		if(j == 3)
		{
			j = 0;
			i++;
			input_amount++;
		}
		arq >> data[i][j];
		j++;
	}
	/*------------------------------------------------------------------------*/
	//Ordering priority column:

	for(i = 0; i < input_amount; i++)
		array[i] = data[i][2];

	for(i = 0; i < input_amount; i++)
	{
		for(j = i + 1; j < input_amount; j++)
		{
			if(array[i] > array[j])
			{
				/*--------------------------------------------------------------
				This part finds the greatest element of array and put at the
				last position of array (n - 1).
				--------------------------------------------------------------*/
				greatest_element = array[i];
				//Swaping elements(array[i] = array[a] and array[a] = array[i]):
				array[i] = array[j];
				array[j] = greatest_element;
			}
		}
	}
	/*------------------------------------------------------------------------*/
	//Executing processes and output:

	for(i = 0; i < input_amount; i++)
		for(j = 0; j < input_amount; j++)
		{
			if(array[i] == data[j][2])
			{
				cout << "P" << data[j][0];

				for(a = 0; a < data[j][1]; a++)
				{
					cout << "-";
					ms++;
				}
				//The last process cannot be added:
				if(i != (input_amount - 1))
					average_time = average_time + ms;
			}
		}

	cout << endl;
	cout << "Tempo medio de espera: " << average_time / input_amount << "ms";
	cout << endl;
	/*------------------------------------------------------------------------*/

	arq.close();
	return 0;
}
