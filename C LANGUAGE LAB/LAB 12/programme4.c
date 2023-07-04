#include <stdio.h>
void fun(int year){
  if (year%4==0&&year%100!=0) 
    printf("%d is a Leap Year", year);
  else if (year%100==0&&year%400==0) 
    printf("%d is a Leap Year", year);
   else 
    printf("%d is not a Leap Year", year);
}

int main() {
  int year;
  printf("Enter the year: ");
  scanf("%d",&year);
  fun(year);
  return 0;
}
