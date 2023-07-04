#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

struct cricket_8085{
	char  name_8085[50];
	int age_8085;
	char TeamName_8085[50];
	int noofmatch_8085;
	int avg_8085;	
};

int main(){
    //struct cricket_8085 player[n] will produce segmentation fault if n is large enough
    int n_8085=0;
    cout << "Enter the number of players: ";
    cin >> n_8085;
	struct cricket_8085 *player_8085 = (struct cricket_8085*)malloc(n_8085 * sizeof(struct cricket_8085));
    
    for(int i_8085=0;i_8085<n_8085;i_8085++){
        char k_8085;
	    cout<<"Enter the details of player " << i_8085+1 <<endl;
	    cout<<"Name: ";
	    cin >> k_8085;
	    cin.getline(player_8085[i_8085].name_8085, 50);
	    
	    cout<<"Age : ";
	    cin>>player_8085[i_8085].age_8085;
	    
	    cout<<"Team Name : ";
	    cin >> k_8085;
	    cin.getline(player_8085[i_8085].TeamName_8085, 50);
	    
    	cout<<"No. of matches : ";
    	cin>>player_8085[i_8085].noofmatch_8085;
    	
	    cout<<endl<<"Batting Average : ";
	    cin>>player_8085[i_8085].avg_8085;
	    cout << endl;
    }
    
    struct cricket_8085 s_8085;                                              //dividing into teams
    for(int i_8085=0;i_8085<n_8085;i_8085++){
        for(int j_8085=i_8085+1;j_8085<n_8085;j_8085++){
            if(strcmp(player_8085[i_8085].TeamName_8085,player_8085[j_8085].TeamName_8085)>0){
                s_8085= player_8085[i_8085];
                player_8085[i_8085]=player_8085[j_8085];
                player_8085[j_8085]=s_8085;
            }
        }
   }
   cout << endl; //displaying team members
   for(int i_8085=0;i_8085<n_8085;i_8085++){
       cout << "Team name: " <<  player_8085[i_8085].TeamName_8085 << endl;
       cout << "Player name: " << player_8085[i_8085].name_8085 << endl;
       cout << "Age: " << player_8085[i_8085].age_8085 << endl;
       cout << "Number of matches: " << player_8085[i_8085].noofmatch_8085 << endl;
       cout << "Batting average: " << player_8085[i_8085].avg_8085 <<endl;
   }
	return 0;
}
