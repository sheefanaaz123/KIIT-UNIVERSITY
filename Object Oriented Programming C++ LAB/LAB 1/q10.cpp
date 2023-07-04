#include <iostream>
using namespace std;

int main() {
   int n_8085,i_8085, j_8085;
   cout<<"Enter the number ::";
   cin>>n_8085;
   for (i_8085= 1; i_8085<=n_8085; i_8085++) {
      for (j_8085 = 1; j_8085 <= i_8085; j_8085++) {    //printing the pattern
         cout<<" * ";
      }
      cout<<"\n";
   }
   return 0;
}

