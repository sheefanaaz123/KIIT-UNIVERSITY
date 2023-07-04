#include<iostream>
using namespace std;
template<class T>
class vector
{
    T v[20];
    int size;
   
    public:
        void create();
        void modify();
        void mult();
        void display();
};

template<class T>
void vector<T>::create()
{
    int i;
    T value;
    char ans;
    size=0;
    do{
        cout<<"\nEnter the index & value:";
        cin>>i>>value;
        v[i]=value;
        size++;
        cout<<"\nDo you want more elements?";
        cin>>ans;
    }while(ans=='y'||ans=='Y');
}

template<class T>
void vector<T>::modify()
{
    int key;
    T newval;
    cout<<"\nEnter index for modificaion:";
    cin>>key;
    cout<<"\nEnter new value:";
    cin>>newval;
    v[key]=newval;
}

template<class T>
void vector<T>::mult()
{
    int i;
    int scalarval;
    cout<<"\nEnter scalar value for multiplication";
    cin>>scalarval;
    for(i=0;i<size;i++)
    v[i]=v[i]*scalarval;
}

template<class T>
void vector<T>::display()
{
    int i;
   
    cout<<"\nSize of vector is:"<<size;
    cout<<"\nElements in vector are:";
    cout<<"(";
    for(i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<")";
}

int main()
{
    int ch;
    vector<int>obj;
    cout<<"\nProgram for template class";
    do
    {
        cout<<"\nMAIN MENU";
        cout<<"\n1.Create";
        cout<<"\n2.Display";
        cout<<"\n3.Mult";
        cout<<"\n4.Modify";
        cout<<"\n0.Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;
       
        switch(ch)
        {
            case 1:
                obj.create();
                break;
               
            case 2:
                obj.display();
                break;
               
            case 3:
                obj.mult();
                break;
               
            case 4:
                obj.modify();
                break;
               
            case 0:
                cout<<"\nExit\n";
                break;
               
            default:
                cout<<"\nInvalid choice";
                break;
        }
    }while(ch!=0);
    return 0;
}

