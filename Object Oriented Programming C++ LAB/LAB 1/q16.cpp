#include<iostream>
using namespace std;
int main ()
{
    int array_8085[100][100], i_8085, j_8085, r_8085, c_8085, flag_8085 = 0;
    
    cout << "Enter the number of rows and columns :: ";
    cin >> r_8085 >> c_8085;
    
    cout << "Enter the elements :: ";
    for (i_8085 = 0; i_8085 < r_8085; i_8085++)
        for (j_8085 = 0; j_8085 < c_8085; j_8085++)
            cin >> array_8085[i_8085][j_8085];
            
    for (i_8085 = 0; i_8085 < r_8085; i_8085++)                //if the elements are not equal then
    {
        for( j_8085 = 0; j_8085 < c_8085; j_8085++)
        {
            if (array_8085[i_8085][j_8085]!= array_8085[j_8085][i_8085])
                flag_8085 = 1;
        }
    }
    if (flag_8085 == 0)
        cout << "Symmetric"<<endl;
    
    else
        cout << "Not Symmetric"<<endl;
    
    return 0;
}
    
    
    
    
    
    
