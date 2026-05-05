#include<stdio.h>
int main(){
  int num;
  printf("welcome  to Palindrome Number Checker \n");
  printf("please Enter a Number :");
  scanf("%d",&num);

  
  int reverse = 0;
  int copy = num;
  while (copy > 0)
  {
    int digit = copy % 10;
    reverse = reverse * 10 + digit;
    copy /= 10;
 
  }
  if(reverse == num)
  {
    printf(" the number %d is a Palindrome number.", num);
  }
  else{
    printf(" the number %d is not a Palindrome number.", num);
  }
  return 0; 
}