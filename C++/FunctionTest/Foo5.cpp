
////////////////////////////////////////////////////////////////////////////

#include <iostream>				//using cout/cin

#include<stdlib.h>				//using system("cls)

using namespace std;			//use cout/cin  (std::)

////////////////////////////////////////////////////////////////////////////

void Foo5(int *arr)
{
	int SIZE = 5;
	
	for(int i = 0; i<SIZE; i++)
	{
		for(int j = 0; j < SIZE - 1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << arr[i];
	}
	
	cout << endl << endl;
}



