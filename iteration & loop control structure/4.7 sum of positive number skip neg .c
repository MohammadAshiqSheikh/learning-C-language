#include<stdio.h>
int main()
{
  int num;
  int sum = 0;
  printf("welcome to sum of positive number program\n");
  do{
    printf("enter a number: \n");
    scanf("%d",&num);
    if(num < 0) continue;
    sum += num;
  }while(num != 0);

  printf("the sum of  all positive numbers is: %d", sum);
  return 0;
}