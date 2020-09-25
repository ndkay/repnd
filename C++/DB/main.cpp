
#include <cstring>
#include <iostream>
#include <windows.h>
 
using namespace std;

double t;
int main(int argc, char** argv) {
	
setlocale(LC_ALL,"russian");
	string bazanames[256] = {"Козляковский В.О.","Кормщиков И.В.","Филиппов В.Д"};
	cout<<"Hack the base?"<<endl;
		cout<<"Yes or No"<<endl;
	string k;
	cin>>k;
	
	
	if(k=="Yes"||k=="yes"||k=="YES"||k=="yEs"||k=="yeS"){
		while(t<100){
			for(t = 0.1;t<=100;t++){
				cout<<t<<" %";
				system("cls");
				cout<<"Hacking...";
				
			}
	
	}
		cout<<"Want to get a list of names in the database?"<<endl;
		cout<<"Yes or No"<<endl;
		string h;
		cin>>h;
		if(h=="Yes"||k=="yes"||k=="YES"||k=="yEs"||k=="yeS"){
			for(int i = 0;i<20;i++){
				cout<<bazanames[i]<<endl;
			}
		}
			
		else{
			cout<<"You leave base"<<endl;
			return 0;
		}
		
	}
	else{
			cout<<"You leave base"<<endl;
			return 0;
		}
	
system("pause");
    return 0;
}
