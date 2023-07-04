#include<iostream>
#include <string.h>

using namespace std;
//structure libray is created
struct library_8085{	
	int No_8085;
    char BookName_8085[50];
    char AuthorName_8085[50];
    char sign_8085[3]; 
};

struct library_8085 book_8085[50];
int count_8085=0;
//function for asking the option
void enteries_8085(struct library_8085 *book_8085){
    getchar();
    cout<<"Book Details \n";
    cout<<"Book Name : ";
    fgets(book_8085->BookName_8085,sizeof(book_8085->BookName_8085),stdin);
    cout<<"Author Name : ";
    fgets(book_8085->AuthorName_8085,sizeof(book_8085->AuthorName_8085),stdin);
    cout<<"Book Issued ? (Y/N):";
    gets(book_8085->sign_8085);
    book_8085->No_8085=count_8085;
}
//function for displaying details
void details_8085(struct library_8085 *book_8085){
    cout<<"\nBook Details \n\n";
    cout<<"Book Name   :"<< book_8085->BookName_8085;
    cout<<"Author Name :"<<book_8085->AuthorName_8085;
    cout<<"Access No.   :"<<book_8085->No_8085;
}
int main(){
        cout<<"\n-------MENU--------- \n";
        cout << "1) Add book details.\n2) Display book details.\n3) List all books of given author.\n4)"
                " List the count of books in the library.\n5) List the title of specified book\n6) List the books in the order of accession number\n7) Exit.\n";
        int k_8085=0;
        cin >> k_8085;
        system("cls");
        //switch case for the entered choice.
        switch(k_8085){
            case 1:{
                if(count_8085>50){
                    cout << "memory full";
                    main();
                }
                enteries_8085(&book_8085[count_8085]);
                count_8085++;
                main();
            }
            case 2:{
            	int i_8085;
                for(i_8085=0;i_8085<count_8085;i_8085++)
                {
                    details_8085(&book_8085[i_8085]);
                }
                 main();
            }
            case 3:{
            int t_8085=0;
            cout << "\nEnter author name: ";
            char temp_8085[50];
            getchar();
            fgets(temp_8085,sizeof(temp_8085),stdin);
            for(int i_8085=0;i_8085<count_8085;i_8085++)
            {
                 if(strcmp(book_8085[i_8085].AuthorName_8085,temp_8085)==0)
                 {
                     details_8085(&book_8085[i_8085]);
                     t_8085++;
                 }
            }
            t_8085==0? cout << "No data found" : cout << "";
            main();
            }
            case 4:{
             cout << "\n\nTotal books in library : " << count_8085;
             main();
            }
            case 5:{
                int t_8085=0;
                cout << "\nEnter access no : ";
                int temp_8085;
                cin >> temp_8085;
                int i_8085;
                for(i_8085=0;i_8085<count_8085;i_8085++)
            {
                 if(book_8085[i_8085].No_8085==temp_8085)
                 {
                     details_8085(&book_8085[i_8085]);
                     t_8085++;
                 }
            }
            t_8085==0? printf("No data found") : printf("");
            main();
            }
            case 6:{
            	int i_8085;
                for(i_8085=0;i_8085<count_8085;i_8085++)
                {
                    details_8085(&book_8085[i_8085]);
                }
                 main();
            }
            case 7:{
             exit(0);
            }
            default: {main();}
        }
     return 0;   
}
