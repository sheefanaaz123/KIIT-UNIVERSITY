#include <iostream>
#include <string>
using namespace std;

class Account_8085
{
  private:
  char name_8085[15];
  char type_8085[15];
  int no_8085;
  int balance_8085;
 
  public:
   void input_8085()
   {
   	//input
   	cout<<"Enter the name ::"<<endl;
   	cin>> name_8085;
   	cout<<"Enter the account type ::"<<endl;
   	cin>> type_8085;
   	cout<<"Enter the account number ::"<<endl;
   	cin>> no_8085;
   	cout<<"Enter the current balance :: "<<endl;
    cin>>balance_8085;
}
   //amount to withdraw 
   void withdraw_8085()
   {
   	    int withdraw_8085;
   	    int balance_8085;
   	    cout<<"Enter the amount to withdraw\n";
   	    cin>>withdraw_8085;
   	    balance_8085 = balance_8085 -withdraw_8085;	
 
   }
     //amount deposited
   void deposit_8085(){
     int deposit_8085;
     int withdraw_8085;
     int balance_8085;
   	 cout<<"Enter the amount to deposit : ";
   	 cin>>withdraw_8085;
   	 balance_8085 = balance_8085 - deposit_8085;
	}
	//printing the balance and name
	void display_8085(){
		int ivalue_8085;
	cout<<"----INFORMATION----";
    cout<<"\nNAME : "<< name_8085;
    cout<<"\nBALANCE : "<< balance_8085;
 
  }  
	
};
   
int main()
{
  Account_8085 p;
  p.input_8085();
  p.withdraw_8085();
  p.deposit_8085();
  p.display_8085();
  return 0;
}
