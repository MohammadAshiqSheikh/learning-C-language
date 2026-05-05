#include<stdio.h>
int main(){
  int num;
  printf("wellcome  to Reversing The Number \n");
  printf("please Enter a Number:");
  scanf("%d",&num);
  int reversed = 0;
  int copy=num;
  while(copy > 0){
    int digit = copy % 10;
    reversed = reversed * 10 + digit;
    copy /= 10;
  }



  printf("the Reversed Number %d is:%d",reversed,num);
  return 0;
}