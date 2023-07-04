#include<iostream>
using namespace std;

int main()
{
 
    int arr_8085[10],n_8085,i_8085,t_8085;
     
    cout<<"Enter the number of element : "<<endl;
    cin>>n_8085;
     
    
    cout<<"Enter the elements : "<<endl;
    for(i_8085=0;i_8085< n_8085;i_8085++)
    {
        cin>>arr_8085[i_8085];
    }
    
    for(i_8085=0;i_8085<n_8085;i_8085+=2)              //we use the method of swapping 2 numbers.
    {
        t_8085    = arr_8085[i_8085];
        arr_8085[i_8085] = arr_8085[i_8085+1];
        arr_8085[i_8085+1]= t_8085 ;
    }
     
    cout<<"AFTER SWAPPING THE PAIR::";
    for(i_8085=0;i_8085< n_8085;i_8085++)
    {
        cout<<arr_8085[i_8085]<<" ";
    }
    
	return 0;
}

