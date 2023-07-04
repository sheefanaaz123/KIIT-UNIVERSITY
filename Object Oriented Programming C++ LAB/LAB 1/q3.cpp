#include <iostream>
using namespace std;                   

int main()
{
	int h_8085,m_8085,s_8085;
	cout<<"Enter Total Seconds :: ";
	cin>>s_8085;
	
	h_8085 = (s_8085/3600); 	                     //total hours
	m_8085 = (s_8085 - 3600*h_8085)/60;	             //total minutes
	s_8085 = (s_8085 - 3600*h_8085 - m_8085*60);     //total second
	
	cout<<h_8085<<" Hours "<<m_8085<<" Minutes "<<s_8085<<" Seconds";
	
    return 0;
    
}
