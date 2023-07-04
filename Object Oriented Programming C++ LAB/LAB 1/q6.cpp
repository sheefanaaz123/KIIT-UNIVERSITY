#include <iostream>
using namespace std;

int main() {
   int year_8085;
   cout<<"ENTER YEAR::";
   cin>>year_8085;

    if (year_8085%4==0&&year_8085%100==0&&year_8085%400==0)     //if the year is divided by 4,100,400, then its aleap year
        cout<<"LEAP YEAR";

    else if (year_8085%4==0&&year_8085%100!=0)        //if the year is divided by 4 but not by 100,then again its aleap year
        cout<<"LEAP YEAR";
    else
        cout<<"NOT A LEAP YEAR";


   return 0;
}
