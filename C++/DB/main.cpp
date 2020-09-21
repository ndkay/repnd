
#include <cstring>
#include <iostream>
#include <windows.h>
 
using namespace std;

double t;
int main(int argc, char** argv) {
	
setlocale(LC_ALL,"russian");
	string bazanames[256] = {"Козляковский В.О.","Кормщиков И.В.","Филиппов В.Д"};
	cout<<"Взломать базу данных?"<<endl;
	string k;
	cin>>k;
	
	
	if(k=="Yes"){
		while(t<100){
			for(t = 0.1;t<=100;t++){
				cout<<t<<" %";
				system("cls");
				cout<<"Взлом базы...";
				
				
			}
	
	}
		cout<<"Хотите получить список базы?"<<endl;
		string h;
		cin>>h;
		if(h=="Yes"){
			for(int i = 0;i<20;i++){
				cout<<bazanames[i]<<endl;
			}
		}
		else if(h=="No"){
			cout<<"Вы покидаете ббазу"<<endl;
			return 0;
		}
	
			
		else{
			cout<<"Вы покидаете ббазу"<<endl;
			return 0;
		}
	}
	

    return 0;
}
