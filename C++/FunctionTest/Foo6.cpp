////////////////////////////////////////////////////////////////////////////

#include <iostream>				//using cout/cin

#include<stdlib.h>				//using system("cls)

using namespace std;			//use cout/cin  (std::)

////////////////////////////////////////////////////////////////////////////


void quickSortR(int* arr, int SIZE) 
{

  int i = 0, j = SIZE-1; 		
  int temp, p;

  p = arr[ SIZE>>1 ];		
  
  do 
  {
  	while ( arr[i] < p ) i++;
    while ( arr[j] > p ) j--;

    if (i <= j) 
	{
      temp = arr[i]; 
	  arr[i] = arr[j]; 
	  arr[j] = temp;
      i++; j--;
    }
  } 
  while ( i<=j );


  
  if ( j > 0 ) quickSortR(arr, j);
  if ( SIZE > i ) quickSortR(arr+i, SIZE-i);
  
	/*
  for(int i = 0; i < SIZE; i++)
	{
		cout << arr[i];
	}
	
	cout << endl << endl;
	*/
}

