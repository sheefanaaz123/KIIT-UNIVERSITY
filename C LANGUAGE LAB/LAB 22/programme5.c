#include<stdio.h>
#include<string.h>
int main()
{
	struct data{
		char employee_name[100],gender[100],designation[100],department[100];
		float basic_pay;
	};
	struct data employee[100];
	
    int n,i;
    printf("\nEnter the number of employee :\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    	printf("\nEnter the data of employee i :\n");
    	scanf("%s %s %s %s %f",employee[i].employee_name,employee[i].gender,employee[i].designation,employee[i].department,&employee[i].basic_pay);
	}
	for(i=0;i<n;i++){
    	printf("\nData of employee i :\n");
    	printf("%s %s %s %s %f",employee[i].employee_name,employee[i].gender,employee[i].designation,employee[i].department,employee[i].basic_pay);
	    float HR=(.25)*employee[i].basic_pay;
		float DA=(.75)*employee[i].basic_pay;
		printf("\nGROSS SALARY : %f\n",employee[i].basic_pay+HR+DA);
	}	
    return 0;
}
