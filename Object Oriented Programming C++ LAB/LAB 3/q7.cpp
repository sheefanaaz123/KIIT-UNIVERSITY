#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

//structure 
struct student
{
 char name_8085[30];
 int rollno_8085;
 float cgpa_8085;
};

int main()
{
 struct student s[10], t_8085;
 int i_8085,j_8085,n_8085;
 
 cout<<"Enter the number of students :\n";
 cin>>n_8085;
 for(i_8085=0;i_8085< n_8085;i_8085++)
 {
  cout<<"Enter name, roll and cgpa of student\n";
  cin>>s[i_8085].name_8085>>s[i_8085].rollno_8085>>s[i_8085].cgpa_8085;
 }
 //sorting of cgpa in decreasing order.
 for(i_8085=0;i_8085<n_8085-1;i_8085++)
 {
  for(j_8085=i_8085+1;j_8085< n_8085;j_8085++)
  {
   if(s[i_8085].cgpa_8085<s[j_8085].cgpa_8085)
   {
    t_8085 = s[i_8085];
    s[i_8085] = s[j_8085];           
    s[j_8085] = t_8085;
   }
  }
 }
 //printing the cgpa
 cout<<"\nCGPA IN ORDER : \n";
 for(i_8085=0;i_8085<n_8085;i_8085++)
 {
  cout<<"\nName: " <<s[i_8085].name_8085;
  cout<<"\nRoll NO : " <<s[i_8085].rollno_8085;
  cout<<"\nCGPA: " <<s[i_8085].cgpa_8085<<endl<<endl ;
 }
 return 0;
}
