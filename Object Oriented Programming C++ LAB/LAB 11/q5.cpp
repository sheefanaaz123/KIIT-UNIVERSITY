#include<iostream>
#include<fstream>
#include<stdio>
#include<conio>
using namespace std;

int main()
{
  ifstream fs;
  ofstream ft;
  char ch, fname1[20], fname2[20];

  cout<<"Enter source file : ";
  gets(fname1);
  fs.open(fname1);
  if(!fs)
  {
    cout<<"Source file does not exist";
    getch();
    exit(1);
  }

  cout<<"Enter target file name : ";
  gets(fname2);
  ft.open(fname2);
  if(!ft)
  {
    cout<<"Target file does not exist";
    fs.close();
    getch();
    exit(2);
  }

  while(fs.eof()==0)
  {
    fs>>ch;
    ft<<ch;
  }

  cout<<"File copied successfully";

  fs.close();
  ft.close();
  
        return 0;
}
