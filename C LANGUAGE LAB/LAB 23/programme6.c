#include<stdio.h>

int main()
{
    struct person{
    	char name[10];
    	char sex[10];
    	int age;
	};
    struct person pf[10],pm[10];
    int m,f;
 printf("Enter the data of 10 person:\n\n");
 printf("Enter number of female among 10 people ::\n");
 scanf("%d",&f);
 printf("\nEnter number of male among 10 people ::\n");
 scanf("%d",&m);
 
 char t1='M', t2='F';
 int i,maxf=0,maxm=0;
 
 printf("\nENTER THE DATA OF FEMALE :: \n");
 for(i=0;i<f;i++){
 	printf("Enter name, sex, age of person %d\n",i+1);
 	scanf("%s %s %d",pf[i].name,pf[i].sex,&pf[i].age); 	
 }
 for(i=0;i<f;i++){
 	printf("\nName, sex, age of person %d\n",i+1);
 	printf("\n%s %s %d\n",pf[i].name,pf[i].sex,pf[i].age); 	
 }
 
 for(i=0;i<f;i++){
	if(pf[i].sex[i] == t2){
		if(pf[i].age>maxf){
 		maxf = pf[i].age;
	}
	}
}
printf("\nMAXIMUM AGE AMONG 'FEMALE' :: %d\n",maxf);
 
 
 printf("\nENTER THE DATA OF MALE :: \n");
 for(i=0;i<m;i++){
 	printf("\nEnter name, sex, age of person %d\n",i+1);
 	scanf("%s %s %d",pm[i].name,pm[i].sex,&pm[i].age); 	
 }
 for(i=0;i<m;i++){
 	printf("\nName, sex, age of person %d\n",i+1);
 	printf("\n%s %s %d\n",pm[i].name,pm[i].sex,pm[i].age); 	
 }
 
 for(i=0;i<m;i++){
	if(pm[i].sex[i] == t1){
 		if(pm[i].age>maxm){  
 			maxm = pm[i].age;
	}
		}
}
printf("\nMAXIMUN AGE AMONG 'MALE' :: %d\n",maxm);
    return 0;
}
