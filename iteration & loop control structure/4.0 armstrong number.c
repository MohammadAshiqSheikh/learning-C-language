#include<stdio.h>
int main(){
  int num;
  printf("welcome  to Armstrong Number Checker \n");
  printf("please Enter a Number :");
  scanf("%d",&num);

  
  int sum = 0;
  int copy = num;
  while (copy > 0)
  {
    int digit = copy % 10;
    sum += digit * digit * digit;
    copy /= 10;
 
  }
  if(sum == num)
  {
    printf(" the number %d is an Armstrong number.", num);
  }
  else{
    printf(" the number %d is not an Armstrong number.", num);
  }

}