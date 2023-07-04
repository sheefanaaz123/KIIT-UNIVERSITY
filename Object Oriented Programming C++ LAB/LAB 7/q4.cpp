  //Define a class called Distance that stores feet and inches. WAP to overload
//greater than, less than & not equal to relational operator.

#include <iostream>
using namespace std;
 
class Distance 
{
   private:
      int feet;             
      int inches;           
   public:
      Distance()
      {
      }

      Distance(int f, int i)
      {
         feet = f;
         inches = i;
      }

      void displayDistance() 
      {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
      Distance operator - () 
      {
         feet = - feet;
         inches = - inches;
         return Distance(feet, inches);
      }

// overloaded < operator
      bool operator < (Distance d) 
      {
         if(feet < d.feet) 
         {
            return true;
         }
         else if(feet == d.feet && inches < d.inches) 
         {
            return true;
         }
         else{
         	return false;
		 }
      }
      
// overloaded > operator
      bool operator > (Distance d) 
      {
         if(feet > d.feet) 
         {
            return true;
         }
         else if(feet == d.feet && inches > d.inches) 
         {
            return true;
         }
         else{
         return false;	
		 }
     }
      
      // overloaded != operator
      bool operator != (Distance d) 
      {
         if(feet != d.feet) 
         {
            return true;
         }
         if(feet != d.feet && inches != d.inches) 
         {
            return true;
         }
         return false;
      }
};

int main() 
{
   Distance d1(11, 10), d2(5, 11);
 //<
   if( d1 < d2 ) 
   {
      cout << "d1 is less than d2 " << endl;
   } 
   else 
   {
      cout << "d2 is less than d1 " << endl;
   }
  //> 
   
   if( d1 > d2 ) 
   {
      cout << "d1 is greater than d2 " << endl;
   } 
   else 
   {
      cout << "d2 is greater than d1 " << endl;
   }
//!=	
   if( d1 != d2 ) 
   {
      cout << "d1 is not equal to d2 " << endl;
   } 
   else 
   {
      cout << "d1 is equal to d2 " << endl;
   }
	
   return 0;
}

