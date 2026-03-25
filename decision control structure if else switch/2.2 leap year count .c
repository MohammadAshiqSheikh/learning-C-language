#include<stdio.h>
int main(){
   int year;
printf("please enter a year now check:");
scanf("%d",&year);
if(year % 400 == 0 ||(year % 4 == 0 && year % 100 != 0) )
{
    printf("%d is a leap year ");
}
    else
    {
  printf("%d is a  not leap year ");
    }



// if(year % 400 == 0)
// {
//   printf("%d is a leap year ");
// }
//  else if (year % 100 == 0)
// {
//   printf("%d is a  not leap year ");
// }
//  else if (year % 4 == 0)
// {
//   printf("%d is a leap year ");
// }
// else{
//     printf("%d is a  not leap year ");
// }
// {
//   /* code */

  return 0;
}
