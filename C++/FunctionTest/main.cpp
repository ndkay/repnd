#include <iostream>
#include <string>

#include<stdlib.h>
using namespace std;




void Foo1(int *arr);			//increase by 1
void Foo2(int *arr);			//swap the elements of arr
void Foo3(int *arr);			//print revert
void Foo4(int *arr);			//min value



int main()
 {
 	int arr[5] = {3,5,7,6,9};
 	
 	int command;
 	
 	int value;
 	int indx;
 	
 	while (true)			
{
	cout << "0 - Exit\n1 - Read\n2 - Write(not more than 5 elements)\n3 - increase by 1\n4 - swap elem arr\n5 - print arr rev\n6 - min val" << endl << endl <<  "please, choose a command: ";
	cin>>command;
	system("cls");
	
	switch (command)
	{
		case 1:
			system("cls");
			for (int i = 0; i < 5; i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<endl<<endl;
		break;
			
		case 2:
			cout<<"Select the index of the element to fill and its value:";
			cin>>indx>>value;
			
			arr[indx] = value;
			system("cls");
		break;
		
		case 3:
			Foo1(arr);
		break;	
		
		case 4:
			Foo2(arr);
		break;
		
		case 5:
			Foo3(arr);
		break;
		
		case 6:
			Foo4(arr);
		break;
		
		case 0:
			return 0;
		break;
		
	}
}
 	
	return 0;
 }
