#include<stdio.h>
int main()
{
  char day [10];
  char month[15];
  int year;
  printf("welcome to showing how to format date in c\n");
  printf("Enter current the day: ");
  scanf("%s",day);
  printf("Enter the month: ");
  scanf("%s",month);
  printf("Enter the year: ");
  scanf("%d",&year);
  printf("The current date is: %s %s %d",day,month,year);
  return 0;

}
