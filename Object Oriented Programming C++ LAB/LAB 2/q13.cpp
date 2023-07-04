#include<iostream>
using namespace std;

int fact_8085(int n_8085)                                                    // function
    { 
      int i_8085=1;
      while(n_8085!=0){
          i_8085=i_8085*n_8085;
          n_8085--;
      }
      return i_8085;
     }
     
    int main(){
      int n_8085,r_8085,ncr_8085;
      cout<<"Enter the numbers ::";
      cin>>n_8085>>r_8085;
      ncr_8085=fact_8085(n_8085)/(fact_8085(r_8085)*fact_8085(n_8085-r_8085));             // factorial 
      cout<<"The NCR factor  is "<<ncr_8085;
      return 0;
    }
     
