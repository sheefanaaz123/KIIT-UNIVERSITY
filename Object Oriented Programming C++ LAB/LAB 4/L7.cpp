 #include<iostream>
#include<stdio.h>

using namespace std;

class vector_8085
{
 private:
        int c_8085[2];
       
 public:
 void input_8085()
{
        cout<<"\nEnter the i, j, k components of the vector :: \n";
        cin>>c_8085[0]>>c_8085[1]>>c_8085[2];
    
}
//Modifying the Co-ordinates
void modify_8085()   
{
        cout<<"\nEnter New Co-ordinates : \n";
        cin>>c_8085[0]>>c_8085[1]>>c_8085[2];
}
//Multiplying the Co-ordinates
void multiply_8085()   
{
        int n_8085;
        cout<<"\nEnter Number to Multiply : \n";
        cin>>n_8085;
        c_8085[0]=c_8085[0]*n_8085;
		c_8085[1]=c_8085[1]*n_8085;
		c_8085[2]=c_8085[2]*n_8085;
                
}
//Displaying the vector
void display_8085()  
{
	    cout<<"\nThe vector is :\n";
        cout<<"("<<c_8085[0]<<" "<<c_8085[1]<<" "<<c_8085[2]<<")";
}
        
    
};


int main()
{
        vector_8085 v;
        v.input_8085();
        v.display_8085();
        v.modify_8085();
        v.display_8085();
        v.multiply_8085();
        v.display_8085();
              
        return 0;
}
