#include<stdio.h>
int main(){
  int num;
  printf("wellcome to factorial world \n");
  printf("please Enter a Number:");
  scanf("%d",&num);

  int i = 1;
  int fact = 1;
  while (i <= num)
  {
    fact *= i;
  i++;
  }
  
printf(" the factorial %d and %d",num,fact);



  return 0;
}