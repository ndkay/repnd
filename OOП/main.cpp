#include <iostream>
#include <string>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
int mass[5] = {0,1,2,3,4};

int numcase;
while(1){

cout<<"1:Exit 2:mass 3:element\n";

cin>>numcase;

switch(numcase){
	
	case 1:
		{
		if(numcase==1){
			cout<<"Exit. Yes or No?"<<endl;
			string YN;
			cin>>YN;
			if(YN=="Yes")
			{
				return 0;
			}
			else if(YN=="No"){
				cout<<"ok, go next"<<endl;
			}
			
		}
		break;
	}
		case 2:
			{
				cout<<"Your Massivee====> ";
				for(int i;i<5;i++)
				cout<<mass[i];
				cout<<endl;
			
		
		break;
	}
		case 3:
			{
				int numbermen;
				int number;
				cout<<"Enter the number massive: ";
				cin>>number;
				
				
				for(int i;i<5;i++)
				{
				cout<<mass[i];
				cout<<endl;
				break;
			}
				
				if(number==1)
				{
					cout<<"What number should you change?";
					cin>>numbermen;
					mass[0] = numbermen;
				
					
			}
			
				
				else if(number==2)
				{
					cout<<"What number should you change?";
					cin>>numbermen;
					mass[1] = numbermen;
				
				}
				else if(number==3)
				{
					cout<<"What number should you change?";
					cin>>numbermen;
					mass[2] = numbermen;
				
						
					
				}
				else if(number==4)
				{
					cout<<"What number should you change?";
					cin>>numbermen;
					mass[3] = numbermen;
				
					
					
				}
				else if(number==5)
				{
					cout<<"What number should you change?";
					cin>>numbermen;
					mass[4] = numbermen;
		
					
				}
			
					break;
				}
			}
	}	
		
}
	

				
				
				
				
				
				
			
				
				
				
			
		
		
		
	




	
	


