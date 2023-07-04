#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;
//structure
struct hotel_8085{
	char name_8085[50];
	char add_8085[50];
	char grade_8085;
	int avg_room_charge_8085;
	int no_of_rooms;
};

int main(){
	
struct hotel_8085 h[50];
int n_8085, i;
cout<<"Enter the number of hotel\n";
cin>>n_8085;
struct hotel_8085 *h_8085 = (struct hotel_8085*)malloc(n_8085*sizeof(struct hotel_8085));
//input of data
for(i=1;i<=n_8085;i++){
	cout<<"\nENTER HOTEL DETAILS "<<" NO. "<<i;
	cout<<"\nEnter the name : ";
	cin>>h[i].name_8085;
    cout<<"\nEnter the address : ";
    cin>>h[i].add_8085;
    cout<<"\nEnter the grade ('O','A','F'): ";
    cin>>h[i].grade_8085;
    cout<<"\nEnter the room charges : ";
    cin>>h[i].avg_room_charge_8085;
    cout<<"\nNo. of rooms : ";
    cin>>h[i].no_of_rooms;
}
//room charges
for(i=1;i<=n_8085;i++){
   if(h[i].grade_8085=='O'){
   	cout<<"\nRoom Charges of O GRADE HOTEL :: "<<h[i].avg_room_charge_8085;
   }
   if(h[i].grade_8085=='A'){
   	cout<<"\nRoom Charges of A GRADE HOTEL :: "<<h[i].avg_room_charge_8085;
   }
   if(h[i].grade_8085=='F'){
   	cout<<"\nRoom Charges of F GRADE HOTEL :: "<<h[i].avg_room_charge_8085;
   }    	
}
cout<<"\nHOTEL WITH LESS THAN 5000 ROOM CHARGE\n";
for (int i=1;i < n_8085;i++){
    if (h[i].avg_room_charge_8085 < 5000)
      cout<<h[i].name_8085;
 }
  
  // max room charge
  int max = h[1].avg_room_charge_8085;
  string maxhotel = h[1].name_8085;
  for (int i=1;i < n_8085;i++){
    if (h[i].avg_room_charge_8085 > max)
      max = h[i].avg_room_charge_8085;
	  maxhotel=h[1].name_8085;
 }
  
  cout<<"Maximum room charges is charged by "<<maxhotel<<" :: "<<max;
	return 0;
}
