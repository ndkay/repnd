#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int k;

 int *ukaz = new int[k];

cin>>k;
for(int i = 0;i<k;i++){
	ukaz[i] = i;
	
	cout<<" "<<ukaz[i];

}

	 delete [] ukaz;
	return 0;
}
