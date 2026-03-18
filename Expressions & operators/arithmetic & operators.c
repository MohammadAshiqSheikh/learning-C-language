#include<stdio.h>
int main(){
  int first, second;
  printf("please enter a first number:");
  scanf("%d",&first);
  printf("Now enter a second  number:");
  scanf("%d",&second);
  printf("Now here are the results of operators\n");
  printf("\n %d + %d = %d",first,second,(first + second));
  printf("\n %d - %d = %d",first,second,(first - second));
  printf("\n %d * %d = %d",first,second,(first * second));
  printf("\n %d / %d = %d",first,second,(first / second));
  printf("\n %d % %d = %d",first,second,(first % second));

  return 0;
}