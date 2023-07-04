#include <iostream>
using namespace std;

int main()
{
     int n_8085, num_8085, digit_8085, r_8085= 0;

     cout << "Enter the number: ";
     cin >> num_8085;

     n_8085 = num_8085;

     do
     {
         digit_8085 = num_8085 % 10;                       //reversing the number
         r_8085 = (r_8085 * 10) + digit_8085;
         num_8085 = num_8085 / 10;
     } while (num_8085 != 0);

     cout << " The reverse of the number is: " << r_8085 << endl;

     if (n_8085 == r_8085)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
