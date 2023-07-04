#include<iostream>
using namespace std;
int main ()
{
    int r_8085, c_8085, i_8085, j_8085, k_8085, sum_8085 = 0;
    int Ar_8085[100][100], Tr_8085[100][100], Pr_8085[100][100];
    cout << "Enter no. of rows and columns : ";
    cin >> r_8085 >> c_8085;
    
    cout << "Enter elements of matrix : ";
    for ( i_8085 = 0;  i_8085 < r_8085;  i_8085++)
        for (j_8085= 0; j_8085 < c_8085; j_8085++)
            cin >> Ar_8085[ i_8085][j_8085];
 
    for ( i_8085 = 0;  i_8085 < r_8085;  i_8085++)                                    //transpose
        for (j_8085 = 0; j_8085 < c_8085; j_8085++)
            Tr_8085[j_8085][ i_8085] = Ar_8085[ i_8085][j_8085];
            
    for ( i_8085 = 0;  i_8085 < r_8085;  i_8085++)
      {
        for (j_8085 = 0; j_8085< c_8085; j_8085++)
        {
            for ( k_8085 = 0 ; k_8085 < c_8085 ; k_8085++ )
            sum_8085 = sum_8085 + Ar_8085[i_8085][k_8085] * Tr_8085[k_8085][j_8085];    //product of transpose and the matrix         
            Pr_8085 [i_8085][j_8085] = sum_8085;
            sum_8085 = 0;
        }			
    }
    for (i_8085 = 0;  i_8085 < r_8085;  i_8085++)
    {
        for (j_8085 = 0; j_8085< c_8085; j_8085++)
        {
            if ( i_8085 == j_8085)
                if (Pr_8085[ i_8085][j_8085] != 1 )
                    break;
            else
            {
                if (Pr_8085[ i_8085][j_8085] != 0 )
                    break;
            }
        }
        if (j_8085 != r_8085)
            break;
    }
    if (i_8085 != r_8085)
        cout << "Not orthogonal.\n ";
    else
        cout << "Orthogonal.\n ";
	
    return 0;
}
