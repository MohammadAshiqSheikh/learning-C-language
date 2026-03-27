#include<stdio.h>
int main(){
   int number;
   printf("Please Enter a Number:");
   scanf("%d",&number);
   number % 2 == 0 ? printf(" the number  is even")
                   : printf(" the number is odd");

  return 0;
}