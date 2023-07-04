#include<iostream>
using namespace std;

int main(){
	cout<<"ENTER THE AMOUNT ::";
    int amount_8085;
    cin>>amount_8085;
    cout<<"Rs. 100 currency notes :: " <<amount_8085/ 100<<endl;
	cout<<"Rs. 50 currency notes  :: "<<(amount_8085 % 100) / 50<<endl;         //we will get the remainder, then divide it by 50
	cout<<"Rs. 10  currency notes :: "<<((amount_8085 % 100) % 50) / 10<<endl;  //we will divide the remainder by 10
	
	return 0;
}
