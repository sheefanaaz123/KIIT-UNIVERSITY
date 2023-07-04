#include <iostream>
using namespace std;
 
struct Employee_8085 {
    string name_8085;
    string doj_8085;              //We created a structure here
    int salary_8085;
};
 
int main() {
    Employee_8085 e1_8085, e2_8085;
     
    cout << "Enter name of employee 1: ";      //inputs
    cin>>e1_8085.name_8085;

    cout << "Enter the date of joining of employee 1 : ";
    cin>>e1_8085.doj_8085;
    
    cout << "Enter salary of employee 1 : ";
    cin >> e1_8085.salary_8085;
    
    cout << "Enter name of employee 2: ";
    cin>>e2_8085.name_8085;

    cout<<"Enter the date of joining of employee 2: ";
    cin>>e2_8085.doj_8085;
    
    cout <<"Enter salary of employee 2 : ";
    cin >> e2_8085.salary_8085;
    
    
    
     //printing the details of employee
    
    cout <<endl<<"Employee 1 Details" << endl;
    cout << "Name : " << e1_8085.name_8085 << endl <<"Date of joining : "<<e1_8085.doj_8085<<endl<<"Salary : "<< e1_8085.salary_8085 << endl;
   
    cout <<endl<<"Employee 2 Details" << endl; 
    
    cout << "Name : " <<e2_8085.name_8085<< endl <<"Date of joining : "<<e2_8085.doj_8085<<endl<<"Salary : "<< e2_8085.salary_8085 << endl;
    
    
     
    return 0;
}
