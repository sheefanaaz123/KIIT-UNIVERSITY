//Conversion from basic to class type – Define a constructor with no arguments,
//with one int argument and with one float argument (total 3 constructors).
//Depending on the data type & arguments, respective constructor will be
//invoked.
#include <iostream>
#include <conio.h>
#include<stdlib.h>

using namespace std;

class Time
{
	int h,m;
	public:
        Time(){
        	cout<<"\nNo Arguments\n";
		}
		Time(int t){
        	h=t/60;
        	m=t%60;
        	cout<<"\ninteger argument\n";
		}
		Time(float t){
        	
        	cout<<"\nFloat Argument\n";
		}
		void display(){
		    cout<<"Hours :" <<h<<endl;
	        cout<<"Minutes :" <<m<<endl;
		}
};

int main()
{
	system("cls");
	int duration;
	
	cout<<"Enter duration :"; 
    cin>>duration;
	
	Time t1=duration;
        
	t1.display();
	getch();
	return 0;
}
