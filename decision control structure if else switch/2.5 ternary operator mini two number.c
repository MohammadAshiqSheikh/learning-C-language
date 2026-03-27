#include<stdio.h>
int main(){
 int first , second;
 printf("Please Enter a First Number:\n");
 scanf("%d",&first);
 printf("Now, Enter a Second number:");
 scanf("%d",&second);
  int min = first < second ? first : second;
  printf("Min of two Number is %d",min);


  return 0;
}