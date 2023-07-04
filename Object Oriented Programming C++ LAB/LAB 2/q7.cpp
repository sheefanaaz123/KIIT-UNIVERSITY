#include <iostream>
using namespace std;

int check_8085(int n_8085) {
  int i_8085, isPrime_8085 = 1;

  if (n_8085 == 0 || n_8085 == 1) {
    isPrime_8085 = 0;
  }                                  //function
  else {
    for(i_8085 = 2; i_8085 <= n_8085/2; ++i_8085) {
      if(n_8085 % i_8085 == 0) {
        isPrime_8085 = 0;
        break;
      }
    }
  }

  return isPrime_8085;
}


int main() {
  int n_8085, i_8085, flag_8085 = 0;
  cout<<"Enter a number: ";
  cin>>n_8085;

  for (i_8085 = 2; i_8085 <= n_8085 / 2; ++i_8085) {
   
    if (check_8085(i_8085) == 1) {
      
      if (check_8085(n_8085 - i_8085) == 1) {
        cout<<"Can be expressed as sum of two prime numbers";
        flag_8085 = 1;
      }
    }
  }

  if (flag_8085 == 0)
    cout<<"Cannot be expressed as the sum of two prime numbers.";
 
  return 0;
}

