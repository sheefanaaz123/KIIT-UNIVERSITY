#include<iostream>

using namespace std;

int main(){
	
	int r_8085,i_8085,j_8085,k_8085;
	cout<<"ENTER THE NUMBER OF ROWS HERE ::";        //enter the no. of rows
	cin>>r_8085;
	
	for(i_8085=1;i_8085<=r_8085;i_8085++){                   
		k_8085=i_8085;
		for(j_8085=r_8085;j_8085>i_8085;j_8085--){        //printing the pattern
			cout<<" ";
		}
		for(j_8085=1;j_8085<=i_8085;j_8085++){
			cout<<j_8085;
		}
		for(j_8085=1;j_8085<i_8085;j_8085++){
			k_8085=k_8085-1;
			cout<<k_8085;
		}
		cout<<endl;
	}		


	return 0;
}
