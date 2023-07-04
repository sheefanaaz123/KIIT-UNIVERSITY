#include<iostream>
using namespace std;
//structure
struct time_8085{
	int hour_8085;
	int minute_8085;
	int second_8085;	
};

int main(){

struct time_8085 t1_8085, t2_8085;
	//enter the time
	cout<<"Enter the hours, minutes and seconds of time 1 : "<<endl;
	cin>> t1_8085.hour_8085>>t1_8085.minute_8085>>t1_8085.second_8085;
	
	cout<<"\nEnter the hours, minutes and seconds of time 2 : "<<endl;
	cin>> t2_8085.hour_8085>>t2_8085.minute_8085>>t2_8085.second_8085;
   //diplaying the time in hh:min:second
    cout<<endl<<"TIME 1 : "<<t1_8085.hour_8085<<":"<<t1_8085.minute_8085<<":"<<t1_8085.second_8085<<endl;
    cout<<endl<<"TIME 2 : "<<t2_8085.hour_8085<<":"<<t2_8085.minute_8085<<":"<<t2_8085.second_8085<<endl;
    //comparing time if they are equal
	if(t1_8085.hour_8085==t2_8085.hour_8085 && t1_8085.minute_8085==t2_8085.minute_8085 && t1_8085.second_8085 ){		
		cout<<"\nEQUAL";
	}
    else{
    	cout<<"\nNOT EQUAL";
	}
	return 0;
}

