#include <iostream>

using namespace std;



int main(int argc, char** argv)
{
	int array[10];
	int i = 0;

	for(i; i < 10; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> array[i];
	}

	int *pArray = &array[0];

	

	for( i = 0; i < 10; i++)
	{
		cout << *pArray << endl;
		pArray++;
	}



	for(int i = 10; i > 0; i--)
	{
		pArray--;
		cout << *pArray << endl;
	}

	return 0;
}

