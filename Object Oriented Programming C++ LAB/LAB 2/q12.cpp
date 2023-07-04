#include <iostream>

using namespace std;

int sum_8085(int num_8085){
    int sum_8085=0;
    while(num_8085!=0){
        if((num_8085%10)%2==0){
            sum_8085+=num_8085%10;    //function to find sum of even digits
        }   
        num_8085=num_8085/10;
    }
    return sum_8085;
}
int main(){
   int num_8085;
   cout<<"Enter the number ::"<<endl;
    cin>>num_8085;
    cout<<"The sum of the even digits is "<<sum_8085(num_8085);  //sum of digits
    return 0;
}
