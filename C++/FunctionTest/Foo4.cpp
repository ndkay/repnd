//nayti naimen'shee znachenie v massive

//arr

////////////////////////////////////////////////////////////////////////////

#include <iostream>				//using cout/cin

#include<stdlib.h>				//using system("cls)

using namespace std;			//use cout/cin  (std::)

////////////////////////////////////////////////////////////////////////////



void Foo4(int *arr)
{
	int minValue = arr[0];

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < minValue)
		{
			minValue = arr[i];
		}
	}	
	
	cout << "Naimenshee chislo: " << minValue << endl;
}


