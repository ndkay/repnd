
#include <cstring>
#include <iostream>
#include <windows.h>
 
using namespace std;

double t;
int main(int argc, char** argv) {
	
setlocale(LC_ALL,"russian");
	string bazanames[256] = {"������������ �.�.","��������� �.�.","�������� �.�"};
	cout<<"�������� ���� ������?"<<endl;
	string k;
	cin>>k;
	
	
	if(k=="Yes"){
		while(t<100){
			for(t = 0.1;t<=100;t++){
				cout<<t<<" %";
				system("cls");
				cout<<"����� ����...";
				
				
			}
	
	}
		cout<<"������ �������� ������ ����?"<<endl;
		string h;
		cin>>h;
		if(h=="Yes"){
			for(int i = 0;i<20;i++){
				cout<<bazanames[i]<<endl;
			}
		}
		else if(h=="No"){
			cout<<"�� ��������� �����"<<endl;
			return 0;
		}
	
			
		else{
			cout<<"�� ��������� �����"<<endl;
			return 0;
		}
	}
	

    return 0;
}
