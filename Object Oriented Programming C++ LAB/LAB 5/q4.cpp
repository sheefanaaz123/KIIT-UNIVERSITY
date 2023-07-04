#include<iostream>
using namespace std;
//vector class is created.
class vector_8085{
    int s;
    int *cdnt;
    public:
    vector_8085(int s){
            cdnt=new int[s];
            cout<<"Enter "<<s<<" co-ordinates: "<<endl;
            for(int i=0;i<s;i++){
                cin>>cdnt[i];
            }
        }

    void mod_8085(){
            cout<<endl<<"Enter "<<s<<" new co-ordinates: "<<endl;
            for(int i=0;i<s;i++){
                cout<<" ";
                cin>>cdnt[i];
            }
        }

    void mul_8085(){
            int num;
            cout<<endl<<"Enter number to multiply: "<<endl;
            cin>>num;
            for(int i=0;i<s;i++){
                cdnt[i]=cdnt[i]*num;
            }
        }
//printing
    void dis_8085() {
            int i;
            cout<<"Vector:";
            for(i=0;i<s;i++){
                cout<<cdnt[i];
                if(i!=s-1)
                cout<<",";
            }
            cout<<endl;
        }
//destructor
    ~vector_8085(){
            cout<<"Destructor is called."<<endl;
        }
};

//main
int main(){
    int s;
    cout<<"Enter no. of co-ordinates: "<<endl;
    cin>>s;
    vector_8085 v=vector_8085(s);
    v.dis_8085();
    v.mod_8085();
    v.dis_8085();
    v.mul_8085();
    v.dis_8085();
    return 0;
}

