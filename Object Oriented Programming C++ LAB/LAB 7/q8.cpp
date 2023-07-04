//WAP to demonstrate the use of overloaded ( ) operator

#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;             
      int inches;           
      
   public:
      Distance() {
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }

      Distance operator () (int a, int b, int c) {
         Distance D;
         D.feet = a + c + 50;
         D.inches = b + c + 20  ;
         return D;
      }
      void displayDistance() {
         cout << "Feet = " << feet << " Inches = " << inches << endl;
      }   
};

int main() {
   Distance D1(7, 8), D2;

   cout << "1st Distance : \n"; 
   D1.displayDistance();

   D2 = D1(5, 3, 2); 
   cout << "2nd Distance : \n"; 
   D2.displayDistance();

   return 0;
}

