#include<iostream>
#include<fstream>

using namespace std;
int main()
{
   char filename[30], ch;
   int tot=0;
   ifstream fp;
   cout<<"Enter the Name of File: ";
   cin>>filename;
   fp.open(filename, ifstream::in);
   if(!fp)
   {
      cout<<endl<<"File doesn't exist or Access denied!";
      return 0;
   }
   while(fp>>noskipws>>ch)
      tot++;
   fp.close();
   cout<<endl<<"Total Characters = "<<tot;
   cout<<endl;
   return 0;
}
