#include <iostream>
using namespace std;

int series_8085(float x_8085,float n_8085)

{

    int i_8085,sum_8085=0,sign_8085=-1,j_8085,fact_8085=1,p_8085=1;
    for (i_8085=1; i_8085<=(2*n_8085)-1; i_8085+=2)
    {
        for (j_8085=1; j_8085<=i_8085; j_8085++)
        {
        p_8085=p_8085*x_8085;
        fact_8085=fact_8085*j_8085;                        //function for the sine series
        }
        sign_8085=-1*sign_8085;
        sum_8085=sum_8085 + sign_8085*p_8085/fact_8085;       
    }
    return (sum_8085);
}

int main()

{

    float x_8085,n_8085,series_value_8085;
    cout<<"Enter the value of n: ";
    cin>>n_8085;                                 //input of series
	cout<<"Enter the value of x: ";
    cin>>x_8085;
    
    series_value_8085=series_8085(x_8085,n_8085);
    cout<<"Value of sin " << x_8085 <<" is :: "<<series_value_8085;
    return 0;
}


