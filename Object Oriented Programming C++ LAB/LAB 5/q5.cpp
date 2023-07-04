#include<iostream>
#include<string.h>
using namespace std;
//class named point is created.
class books{
  private:
    char *title, *author, *publisher;
    float price;
    int stock;
  public:    
    void getdata();
    void display();
    int search(char *,char *);
    void buy();
    books();
};
//constructor
books::books()      
{
    title=new char[50];
    author=new char[50];
    publisher=new char[10];
    price=0;
    stock=0;
}

void books::getdata() 
{
        cin.ignore();
        cout<<"\nEnter Author Name: ";
        cin.getline(author,50);
        cout<<"\nEnter Title: ";
        cin.getline(title,50);
        cout<<"\nEnter publisher: ";
        cin.getline(publisher,10);
        cout<<"\nEnter price: ";
        cin>>price;
        cout<<"\nEnter stock: ";
        cin>>stock;

}
//displaying data
void books::display() 
{
    cout<<"\nAuthor Name: "<<author;
    cout<<"\nTitle Name: "<<title;
    cout<<"\nPublisher Name: "<<publisher;
    cout<<"\nPrice: "<<price;
    cout<<"\nStock available: "<<stock<<endl;

}

int books::search(char *title1,char *author1) 
{

    if(strcmp(title,title1)==0 && strcmp(author,author1)==0)
        return 1;
    else
        return 0;
}

void books::buy()  {
    int no_of_copies;
    cout<<"\nEnter no. of copies:";
    cin>>no_of_copies;
    if(no_of_copies <= stock)
        {
            cout<<"Available"<<endl;
            cout<<"\nPrice of "<< no_of_copies <<"  books is :  "<<no_of_copies*price;
        }
    else
        {
            cout<<"\nNot available"  ;
        }
}


int main()  
{
    int val=0,ch,n;
    
    char a;
    cout<<"\nEnter no. of books :";
    cin>>n;
    cout<<"\n";
    books b[n];
    char title1[50],author1[50];

    for(int i=0;i<n;i++)
        {
            cout<<"Enter details of book"<<i+1;
            b[i].getdata();
        }

    cin.ignore();

      do
        {
        cout<<"******MENU*****\n";
        cout<<"1.Display\n2.Search\n3.Buy"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            for(int i=0;i<n;i++)
            {
                cout<<"Details of book  "<<i+1<<"  is ";
                b[i].display();
            }
            break;
        case 2:cin.ignore();
            cout<<"\nEnter Author Name: ";
            cin.getline(author1,50);
            cout<<"\nEnter Title: ";
            cin.getline(title1,50);
                
            for(int i=0;i<n;i++)
            {
                val=b[i].search(title1,author1);
                if(val==1)
                {
                    cout<<"\nFound";
                }
            }
                if(val==0)
                cout<<"\nBook is Not available\n";
                return 0;
                break;
        case 3:cin.ignore();
    
                cout<<"\nEnter Author Name: ";
                cin.getline(author1,50);
                cout<<"\nEnter Title: ";
                cin.getline(title1,50);
                
                for(int i=0;i<n;i++)
                {
                val=b[i].search(title1,author1);
                        if(val==1)
                        {
                                cout<<"\nFound";
                                b[i].buy();

                        }

                }
                if(val==0)
                cout<<"\nNot available";
                return 0;
                break;

        }
        cout<<"Do you want to continue:(y or n)"<<endl;
        cin>>a;
        }while(a=='y' || a=='Y');
        return 0;
}
