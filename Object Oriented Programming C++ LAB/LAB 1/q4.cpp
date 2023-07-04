 #include <iostream>
using namespace std;                   

int main()
{
	float total_8085,m1_8085,m2_8085,m3_8085,m4_8085,m5_8085;
	cout<<"Enter the marks in subject 1,subject 2,subject 3,subject 4 and subject 5 respectively"<<endl;
	cin>>m1_8085>>m2_8085>>m3_8085>>m4_8085>>m5_8085;
	total_8085 = m1_8085+m2_8085+m3_8085+m4_8085+m5_8085;
	cout<<"Average marks of 5 subject of a student is :: "<<endl;     //average=sum of obseravation /no.of observations
	cout<<total_8085/5;
    return 0;
    
}
