//pomenyat' mestami dva elementa massiva, vvedennie s klaviatury

//arr

////////////////////////////////////////////////////////////////////////////

#include <iostream>				//using cout/cin

#include<stdlib.h>				//using system("cls)

using namespace std;			//use cout/cin  (std::)

////////////////////////////////////////////////////////////////////////////



void Foo2(int *arr)
{
	
	cout << "Massiv before swap: ";

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	
	int a, b, temp;

	cin >> a >> b;
	
	temp = arr[a];
	
	arr[a] = arr[b];
	
	arr[b] = temp;


	
	cout << "Massiv after swap: ";

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;	

}
