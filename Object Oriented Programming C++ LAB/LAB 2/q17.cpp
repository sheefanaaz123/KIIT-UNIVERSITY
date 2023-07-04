# include<iostream>
using namespace std;

int roundNo_8085(float n_8085)
{
	return n_8085 < 0 ? n_8085 - 0.5 : n_8085 + 0.5;       //function for round off
}

int main()
{
	cout<<"After round off the number is :: "<<roundNo_8085(-6.888);
	return 0;
}
 
