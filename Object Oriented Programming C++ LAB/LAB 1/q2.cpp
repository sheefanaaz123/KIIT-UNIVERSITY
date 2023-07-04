#include <iostream>
using namespace std;

int main()
{
	int given_paisa_8085,rupee_8085,paisa_8085;
	cout<<"Enter Given Paisa : ";
	cin>>given_paisa_8085;
	rupee_8085 = given_paisa_8085 / 100;              //gives quotient
	paisa_8085= given_paisa_8085 % 100;               //gives remainder
	cout<<given_paisa_8085<<" Paisa "<<" = "<<rupee_8085<<" Rupee "<<paisa_8085<<" Paisa ";
	
    return 0;
}
