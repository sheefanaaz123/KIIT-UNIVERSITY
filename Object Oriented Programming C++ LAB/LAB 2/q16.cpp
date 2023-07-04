#include <iostream>
using namespace std;

int main(){

  int l_8085, h_8085, i_8085;
  bool is_prime_8085 = true;                              
                                                                     
  cout << "Enter two numbers: ";                     //enter the numbers
  cin >> l_8085 >> h_8085;

  cout << "\nPrime numbers are ::"<< endl;

  while (l_8085 < h_8085) {
    is_prime_8085 = true;

  
    if (l_8085 == 0 || l_8085 == 1) {
      is_prime_8085 = false;
    }
 
    for (i_8085 = 2; i_8085 <= l_8085/2; ++i_8085) {
      if (l_8085 % i_8085 == 0) {
        is_prime_8085 = false;
        break;
      }
    }
        
    if (is_prime_8085)
      cout << l_8085 << ", ";

    ++l_8085;
  }

  return 0;
}
