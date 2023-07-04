#include <iostream>
#include <string>
using namespace std;
//class is created.
class Bank_8085
{
private :
    string name, type,accno;
    float balance;
public :
    Bank_8085(string n ,string t,string a,float b){
    name=n;
    type=t;
    accno=a;
    balance=b;
}
    void withdraw_8085(int amount)
    {
    if(balance<amount)
    {
    cout<<"Not enough money"<<endl;
    }
    else
    {
    cout<<amount<<" is withdrawn"<<endl;
    balance-=amount;
    }
    }
//depositing the amount.
    void deposit_8085(int amount)
    {
    balance+=amount;
    }
//displaying the data.
    void display_8085()
    {
    cout<<name<<endl;
    cout<<balance<<endl;
    }
    ~Bank_8085()
    {
        cout<<"Destructor is called."<<endl;
    }
};
int main()
{
    string name, type,accno;
    float balance;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter the type of account:"<<endl;
    cin>>type;
    cout<<"Enter the account number:"<<endl;
    cin>>accno;
    cout<<"Enter the balance:"<<endl;
    cin>>balance;

    Bank_8085 b=Bank_8085(name,type,accno,balance);

    b.display_8085();
    return 0;
}
 
