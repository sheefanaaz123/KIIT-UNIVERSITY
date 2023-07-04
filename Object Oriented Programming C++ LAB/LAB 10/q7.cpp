#include <iostream>
using namespace std;
void MyHandler()
{
   try
   {
       throw "hello";
   }
   catch (const char*)
   {
   cout <<"Caught exception inside MyHandler\n";
   throw; //rethrow char* out of function
   }
}
int main()
{
   cout<< "main start";
   try
   {
       MyHandler();
   }
   catch(const char*)
   {
      cout <<"Caught exception inside Main\n";
   }
       cout << "main end";
       return 0;
}

