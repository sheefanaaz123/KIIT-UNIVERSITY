#include <iostream>
using namespace std;

int *segregate_8085(int a_8085[],int n_8085){
    int odd_8085[8],even_8085[8],size_odd_8085=0,size_even_8085=0,index_odd_8085=0,index_even_8085=0;
    for (int i_8085=0;i_8085<n_8085;i_8085++){
        if(a_8085[i_8085]%2==0){
            even_8085[index_even_8085]=a_8085[i_8085];
            size_even_8085++,index_even_8085++;
        }
        else{                                                    //FUNCTION TO SEGREGATE THE ARRAY
            odd_8085[index_odd_8085]=a_8085[i_8085];
            index_odd_8085++,size_odd_8085++;
        }
    }
    for(int i_8085=0;i_8085<size_even_8085;i_8085++){
        a_8085[i_8085]=even_8085[i_8085];
    }
    for (int i_8085=size_even_8085,j_8085=0;j_8085<=size_odd_8085;j_8085++,i_8085++){
        a_8085[i_8085]=odd_8085[j_8085];
    }
    return a_8085;
}

int main(){ 
    int a_8085[8];    
	cout<<"Enter 8 number "<<endl;        
    for (int i_8085=0;i_8085<8;i_8085++){
        cin>>a_8085[i_8085];
    }
    
    segregate_8085(a_8085,8);
    cout<<"After segregation to even and odd:"<<endl;
    for (int i_8085=0;i_8085<8;i_8085++){
        cout<<a_8085[i_8085]<<" ";
    }
    return 0;
}
