#include <iostream>
#include <string>
using namespace std;

class SI_8085
{
  private:
  int pa_8085;
  int rate_8085;
  int tenure_8085;

   public:
   void input_8085()
   {
   	//input
     cout<<"Enter the principal amount , rate of interest and tenure : "<<endl;
     cin>>pa_8085>>rate_8085>>tenure_8085;
            
   }
   //printing the SI and principal amount.
   void display_8085()
   {
     	 cout<< "The SI and total amount is ::" <<  (pa_8085 * rate_8085* tenure_8085) / 100 << " and "<< pa_8085+ ( pa_8085 * rate_8085 * tenure_8085) / 100<<  endl;
   }
};

int main()
{
  SI_8085 p;
  p.input_8085();
  p.display_8085();
  return 0;
}
