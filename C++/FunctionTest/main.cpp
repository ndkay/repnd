#include <iostream>
#include <string>

#include<stdlib.h>
using namespace std;




void Foo1(int *arr);			//increase by 1
void Foo2(int *arr);			//swap the elements of arr
void Foo3(int *arr);			//print revert
void Foo4(int *arr);			//min value
void Foo5(int *arr);			//bubble sort


void quickSortR(int* arr, 		//quick sort
int SIZE); 





struct Node
{
	int data;
	Node *next;
};

Node *head, *tail;

void PrintStruct()
{
	
	Node *tmp = head;
	
	while(tmp != NULL)
	{
		cout << tmp -> data << "\t";
		
		tmp = tmp -> next;
	}
	
	cout << endl << endl;
}

void AddTail()
{
	
	int a;
	
	Node *Four = new Node();
	
	cout << "set the data: ";
	
	cin >> a;
	Four -> data = a;
	
	tail -> next = Four;
	Four -> next = NULL;
	tail = Four;
	
}

void AddHead()
{
	int a;
	
	Node *Fst = new Node();
	
	cout << "set the data: ";
	
	cin >> a;
	Fst -> data = a;
	
	Fst -> next = head;
	head = Fst;
	 
}

void DelEl()
{
	int a;
	int i = 0;
	Node *current = head;
	Node *currentPrev;
	
	cout << "chose the element for delete: ";
	
	cin >> a;
	
	if(a == 0)
	{
		head = current -> next;
		delete current;
	}
	else
	{	
				
		while(a != i)
		{
			if(current != tail)
			{
				currentPrev = current;
				current = current -> next;
			}
			else
			{
				tail = currentPrev;
				currentPrev = NULL;
				delete current;
			}		
						
			i++;
		}
		
		if(a == i)
		{
			currentPrev -> next = current -> next;
			delete current;
		}
		
	}
}



int main()
 {
 	Node *First = new Node();
 	Node *Second = new Node();
 	Node *Third = new Node();
 	
 	
 	First -> data = 10;
 	First -> next = Second;
 	
 	Second -> data = 15;
 	Second -> next = Third;
 	
 	Third -> data = 20;
 	Third -> next = NULL;
 	
 	head = First;
 	tail = Third;
 	
 	
 	
 	
 	
 	
 	
 	
 	int arr[5] = {9,6,2,3,4};
 	
 	int command;
 	
 	int value;
 	int indx;
 	
 	while (true)			
{
	cout << "0 - Exit\n1 - Read\n2 - Write(not more than 5 elements)\n3 - increase by 1\n4 - swap elem arr\n5 - print arr rev\n6 - min val\n7 - bubble sort\n8 - quick sort\n10 - print struct\n11 - add element at tail\n12 - add element at head\n13 - del element" << endl << endl <<  "please, choose a command: ";
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
		
		case 7:
			Foo5(arr);
		break;
		
		case 8:
			quickSortR(arr, 5);
		
		case 9:
			 for(int i = 0; i < 5; i++)
			{
				cout << arr[i];
			}			
			cout << endl << endl;
		break;
		
		case 10:
			PrintStruct();
		break;
		
		case 11:
			AddTail();
		break;
		
		case 12:
			AddHead();
			break;
			
		case 13:
			DelEl();
			break;	
		
		case 0:
			return 0;
		break;
		
	}
}
 	
	return 0;
 }

