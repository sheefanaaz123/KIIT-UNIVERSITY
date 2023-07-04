  //Define a class called Time that stores hours, minutes and seconds. WAP to
//overload +=, -=, *=, %= operators

#include <iostream>
using namespace std;
 
class Time 
{
   private:
      int hours;             
      int minutes;           

   public:
      Time()
      {
      }
      Time(int h, int m)
      {
         hours = h;
         minutes = m;
      }

      
      void displayTime() 
      {
         cout << "H: " << hours << " M:" << minutes <<endl;
      }
      
      Time operator += (int) 
      {
         minutes=minutes + 1 ;          
         if(minutes >= 60) 
         {
            ++hours;
            minutes -= 60;
         }
         return Time(hours, minutes);
      }

      Time operator -= ( int ) 
      {
         Time T(hours, minutes);

         minutes=minutes-1; 
			
         if(minutes >= 60) 
         {
            ++hours;
            minutes -= 60;
         }
         
         return T; 
      }
      
      Time operator *= ( int ) 
      {
         Time T(hours, minutes);

         minutes = minutes*1; 
			
         if(minutes >= 60) 
         {
            ++hours;
            minutes -= 60;
         }

         return T; 
      }
      
      
      Time operator %=( int ) 
      {
         Time T(hours, minutes);

         minutes=minutes%1; 
			
         if(minutes >= 60) 
         {
            ++hours;
            minutes -= 60;
         }
         return T; 
      }
};

int main() 
{
   Time t1(15,34);
   cout<<"Using +=\n";
   t1+=1;               
   t1.displayTime();  
   cout<<"Using -=\n";  
   t1-=1;               
   t1.displayTime();  
   cout<<"Using *=\n";
   t1*=1;              
   t1.displayTime();  
   cout<<"Using %=\n";
   t1%=1;               
   t1.displayTime();  
   return 0;
} 

