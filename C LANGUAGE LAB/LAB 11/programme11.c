//3. WAP to display the grade system of KIIT University based on total marks secured by a
//student in a semester. Use switch-case statement.
#include<stdio.h>

int main()
{
   int marks;  
   
   printf("\nEnter the marks of the student:");
   scanf("%d", &marks);

   switch(marks/50)
   {
       case 10 :
       case 9 :
           printf("\nGrade is: O");
           break;
       case 8 :
           printf("\nGrade is: E" );
           break;
       case 7 :
           printf("\nGrade is: A" );
           break;
       case 6 :
           printf("\nGrade is: B" );
           break;
       case 5 :
           printf("\nGrade is: C" );
           break;
       case 4 :
           printf("\nGrade is: D");
           break;
       default :
           printf("\nFAIL\n");
   }

   return 0;
}

