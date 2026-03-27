#include<stdio.h>
int main(){
 int number;
 printf("Please Enter a Number:");
 scanf("%d",&number);
 printf("%d is a absolute value",
  (number > 0 ? number : -number));

  return 0;
}