#include <iostream>

using namespace std;

void massive (int arr[], int n){
	
	for(int i = 0;i<n;i++){
		
		cout<<" "<<arr[i];
	}
	
	
};


int main(int argc, char** argv){
	
	int n;
	
	cout<<"Arr size = = = = > ";
	cin>>n;
	int* arr = new int[n];
	
	for(int i = 0;i<n;i++){
		 cout << "Element [" << i + 1 << "]: ";
		
		cin>>arr[i];
		
	}
	massive(arr, n);
	
	
	return 0;
}

