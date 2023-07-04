#include <iostream>
#include <string>
using namespace std;

class Student_8085
{
  private:
  int roll_no_8085;
  int marks_8085[6];
  char name_8085[15];
  int total_8085;
  
  public:
   void input_8085()
   {
   	//input
   	cout<<"Enter the marks  :: "<<endl;
   	for(int i_8085=0;i_8085<6;i_8085++){
     cin>>marks_8085[i_8085];
    }
}
   
  //total marks 
   void total_marks_8085()
   {
   	    int sum_8085 =0;
     	cout<<"The total marks :: " <<endl;
     	for(int i_8085=0;i_8085<6;i_8085++){
     	 	sum_8085=sum_8085+marks_8085[i_8085];
     	}
        cout<<sum_8085;	 		 
   }
   //printing grade
   void grade_8085(){
   	int sum_8085;
   	cout<<"\nGRADE OF THE STUDENT IS ::"<< endl;
   	if(sum_8085>=50){
   		cout<<"\nA";
	   }
   	if(sum_8085>=40 && sum_8085<50){
   		cout<<"\nB";
	   }
	if(sum_8085>=30 && sum_8085<40){
		cout<<"\nC";
	}
	if(sum_8085<30){
		cout<<"\nD";
	}
   	
   }
   
   
   
};

int main()
{
  Student_8085 s;
  s.input_8085();
  s.total_marks_8085();
  s.grade_8085();
  return 0;
}
