#include<stdio.h>
int main(){
  int number;
  printf("please enter a number: ");
  scanf("%d",&number);
  if (number % 2 == 0)
  {
    printf("the number is even.");

  }
  else {
    printf("the is a odd.");
  }


  return 0;
}