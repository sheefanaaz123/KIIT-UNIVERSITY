#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string strReplace = "HELLO";
    string strNew = "GOODBYE";
    ifstream filein("filein.txt"); //File to read from
    ofstream fileout("fileout.txt"); //Temporary file
    if(!filein || !fileout)
    {
        cout << "Error opening files!" << endl;
        return 1;
    }

    string strTemp;
    //bool found = false;
    while(filein >> strTemp)
    {
        if(strTemp == strReplace){
            strTemp = strNew;
            //found = true;
        }
        strTemp += "\n";
        fileout << strTemp;
        //if(found) break;
    }
    return 0;
}
