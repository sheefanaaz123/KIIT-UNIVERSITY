#include<iostream>
using namespace std;

struct complex_number_8085{
	float real_8085;
	float imaginary_8085;         //structure
	
};

int main(){
	struct complex_number_8085 c1_8085,c2_8085,sum_8085,diff_8085,mul_8085,div_8085;
	//inputs
    cout<<"Enter complex number 1 details ::\n";
    cout<<"Enter the real part: ";
    cin>>c1_8085.real_8085;
    cout<<"Enter the imaginary part::\n ";
    cin>>c1_8085.imaginary_8085;
    
    cout<<"Enter complex number 2 details ::\n";
    cout<<"Enter the real part: ";
    cin>>c2_8085.real_8085;
    cout<<"Enter the imaginary part::\n ";
    cin>>c2_8085.imaginary_8085;
    
	//operations
	
    sum_8085.real_8085 = c1_8085.real_8085 + c2_8085.real_8085;
    sum_8085.imaginary_8085 = c1_8085.imaginary_8085 + c2_8085.imaginary_8085;
    
    cout<<"SUM"<<endl;
    cout<<sum_8085.real_8085 <<" + "<<sum_8085.imaginary_8085<<" i "<<endl;
	
	diff_8085.real_8085 = c1_8085.real_8085 - c2_8085.real_8085;
    diff_8085.imaginary_8085 = c1_8085.imaginary_8085 - c2_8085.imaginary_8085;
    
    cout<<"DIFFERENCE"<<endl;
    cout<<diff_8085.real_8085 <<" + "<<diff_8085.imaginary_8085<<" i "<<endl;
	
    mul_8085.real_8085 = c1_8085.real_8085*c2_8085.real_8085;
    mul_8085.imaginary_8085 = c1_8085.imaginary_8085*c2_8085.imaginary_8085;
    
    cout<<"MULTIPLICATION"<<endl;
    cout<<mul_8085.real_8085+mul_8085.imaginary_8085<<endl;
	
    div_8085.real_8085 = c1_8085.real_8085 / c2_8085.real_8085;
    div_8085.imaginary_8085 = c1_8085.imaginary_8085 / c2_8085.imaginary_8085;
    
    cout<<"DIVISION"<<endl;
    cout<<div_8085.real_8085 <<" + "<<diff_8085.imaginary_8085<<" i "<<endl;
	
	
	return 0;
}
