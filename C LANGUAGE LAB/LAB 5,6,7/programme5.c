#include<stdio.h>

int main()
{
    float b_salary;
    printf("Enter the basic salary of the person\n");
    scanf("%f",&b_salary);
    if(b_salary<1500)
    printf("The gross salary of the person is\n %f",b_salary+b_salary*10/100+b_salary*40/100);
    else
    printf("The gross salary of the person is\n %f",b_salary+500+b_salary*50/100);
    return 0;
}


