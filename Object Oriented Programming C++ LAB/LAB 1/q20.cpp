#include<iostream>
using namespace std;

int main()
{
    int arr1_8085[2][2], arr2_8085[2][2], arr3_8085[2][2];
    int i_8085, j_8085, k_8085, sum_8085=0;
    
    cout<<"Enter Elements of  Matrix 1: "<<endl;
    
    for(i_8085=0; i_8085<2; i_8085++)                     //matrix 1
    {
        for(j_8085=0; j_8085<2; j_8085++)
            cin>>arr1_8085[i_8085][j_8085];
    }
    cout<<"Enter Elements of  Matrix 2: "<<endl;
    
    for(i_8085=0; i_8085<2; i_8085++)                      //matrix 2
    {
        for(j_8085=0; j_8085<2; j_8085++)
            cin>>arr2_8085[i_8085][j_8085];
    }
    
    for(i_8085=0; i_8085<2; i_8085++)
    {
        for(j_8085=0; j_8085<2; j_8085++)                  //multiplication
        {
            sum_8085=0;
            for(k_8085=0; k_8085<2; k_8085++)
                sum_8085 = sum_8085 + (arr1_8085[i_8085][k_8085] * arr2_8085[k_8085][j_8085]);
            arr3_8085[i_8085][j_8085] = sum_8085;
        }
    }
    cout<<"matrix 1 * matrix 2 = "<<endl;
    
    for(i_8085=0; i_8085<2; i_8085++)
    {
        for(j_8085=0; j_8085<2; j_8085++)                        
            cout<<arr3_8085[i_8085][j_8085]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
