#include <iostream>

using namespace std;


void Foo3(int *arr)
{

int size = 5;

cout <<"massiv before: \t";

for (int i = 0; i < size; i++)
{
	cout <<arr[i] << "\t";
}
cout << endl;


for(int i = 0, j = size - 1; i < j; ++i, --j)
{
	int t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


cout << "massiv after:\t";

for (int i = 0; i < size; i++)
{
	cout << arr[i] << "\t";
}

cout << endl;

}
