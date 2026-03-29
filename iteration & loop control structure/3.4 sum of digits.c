#include<stdio.h>
int main(){
  int num;
  printf("wellcome to sum of digits \n");
  printf("please Enter a Number:");
  scanf("%d",&num);
  int sum = 0;
  int copy = num ;
  while (num > 0)
  {
    sum += num % 10 ;
    num /= 10;
  }
  
printf("the sum of digits is %d and %d",copy,sum);
  return 0;
}