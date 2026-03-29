#include<stdio.h>
int main(){
 int num;
 printf("wellcome to suming odd number\n");
 printf("please enter a number:");
 scanf("%d",&num);

int i =1 ;
int sum = 0;
while (i <= num )
{
  sum += i;
  i += 2;
}

printf("the sum of all odd number from 1 to  %d to %d",num, sum);
  return 0;
}