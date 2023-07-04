// WAP to read itm details used in a party and calculate all expenses, 
//divide expenses in all friends equally.

#include<stdio.h>
int main(){
	struct party{
		int coke,pizza,burger,chips;
	};
	struct party friends[100];
	
	int n,i,sum,total=0;
	float equal;
	
	printf("Enter no. of friends:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("\nFor friend %d :\n",i+1);
		printf("\nEnter the no. of coke:\n");
		scanf("%d",&friends[i].coke);
		printf("\nEnter no. of pizza:\n");
		scanf("%d",&friends[i].pizza);
		printf("\nEnter no. of burger:\n");
		scanf("%d",&friends[i].burger);
		printf("\nEnter no. of chips:\n");
		scanf("%d",&friends[i].chips);
	    sum=30*friends[i].coke+30*friends[i].pizza+30*friends[i].burger;
		printf("\n\nExpense of friend %d is : %d\n\n\n",i+1,sum);
		total=total+sum;
		
	}
	printf("\nTOTAL AMOUNT SPENT : %d\n",total);
	equal=total/n;
	printf("\nEXPENSES ON EACH FRIEND IS : %.2f\n",equal);
	
	return 0;
}
