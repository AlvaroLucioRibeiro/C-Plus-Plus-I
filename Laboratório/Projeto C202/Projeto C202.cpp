#include <iostream>
#include <fstream>
using namespace std;
#define max_input 100
/*------------------------------------------------------------------------*/
int main()
{
	ifstream arq;
	//char file_name[20];
	int array[max_input];
	int greatest_element; //Auxiliary variable
	int data[max_input][3]; //Matrix that stores input data
	int i = 0; //Auxiliary variable
	int j = 0; //Auxiliary variable
	int a = 0; //Auxiliary variable
	int input_amount = 1; //Amount of inputs
	int ms = 0; //Previous time values
	float average_time = 0;
	/*------------------------------------------------------------------------*/
	//Opening file:
	//cin >> file_name;
	//arq.open(file_name, ifstream::in);
	arq.open("dados.txt", ifstream::in);
	/*------------------------------------------------------------------------*/
	//Input:
	arq >> data[0][0];
	arq >> data[0][1];
	arq >> data[0][2];
	i++;
	while(data[i][0] != -1 && data[i][1] != -1 && data[i][2] != -1)
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
	cout << "Tempo medio de espera: " << average_time / input_amount << "ms" << endl;
	/*------------------------------------------------------------------------*/
	arq.close();
	return 0;
}