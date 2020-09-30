//uvelichte znachenia elementov massiva na 1

//arr

////////////////////////////////////////////////////////////////////////////

#include <iostream>				//using cout/cin

#include<stdlib.h>				//using system("cls)

using namespace std;			//use cout/cin  (std::)

////////////////////////////////////////////////////////////////////////////



void Foo1(int *arr)
{	
	cout<<"massive before:\t" << endl;
	
	
	for (int i=0; i<5; i++)
	{
	cout << arr[i] <<"\t";
	}
	
	
	for(int i=0; i<5; i++)
	{
		arr[i]++;
	}
	
	
	cout<<"massive after: " << endl;

	for (int i=0; i<5; i++)
	{
		cout << arr[i] <<"\t";
	}



}

