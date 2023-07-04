#include<iostream>
using namespace std;

int main (){


   int Ar_8085[100][100];
   
   cout << "Enter elements of matrix of 4*4 matrix  : ";
    for ( int i_8085 = 0;  i_8085 < 4;  i_8085++)
        for (int j_8085= 0; j_8085 < 4; j_8085++)
            cin >> Ar_8085[ i_8085][j_8085];
    
	cout<<"MATRIX::"<<endl;        
    for (int i_8085 = 0; i_8085 < 4; i_8085++)
        {
            for (int j_8085 = 0; j_8085 < 4; j_8085++)	
                cout <<Ar_8085[i_8085][j_8085]<<" ";
            cout << "\n";
        }    
        
    int sum1_8085,sum2_8085,sum3_8085,sum4_8085;
    sum1_8085=Ar_8085[1][2]+Ar_8085[1][3];         //top element
    sum2_8085=Ar_8085[4][2]+Ar_8085[4][3];        //bottom element
    sum3_8085=Ar_8085[2][1]+Ar_8085[3][1];        //left element
    sum4_8085=Ar_8085[2][4]+Ar_8085[3][4];        //right element
    
    cout<<endl<<"sum of non diagonal elements is :: "<<sum1_8085+sum2_8085+sum3_8085+sum4_8085;
    
    return 0;
}
    
    
    
    
    
    
