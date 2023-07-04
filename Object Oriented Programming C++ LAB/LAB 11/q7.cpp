#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream f1,f2,f3; 
  string str1,str2; //str1 for fetching string line from file 1 and str2 for fetching string from file2
  
  f1.open("file1.txt",ios::in);//opening file in reading mode
  f2.open("file2.txt",ios::in);
  f3.open("file3.txt",ios::out);//opening file in writing mode

   while(getline(f1, str1)){ //read lines from file object and put it into string and push back to file 3.
         f3<<str1; // inserting the fetched string inside file3
         f3<<endl;
      }

   while(getline(f2, str2)){ //Same step for file 2 to file 3 fetching
         f3<<str2;
         f3<<endl;
      }
    f1.close();
  f2.close();
  f3.close();
}
