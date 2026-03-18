#include<stdio.h>
int main(){
  int number;
  printf("enter a integer number:");
  scanf("%d",&number);
  
  float floating = number;

  printf(" now integer is %d",number);
  printf("now ready to converted %f",floating);


  return 0;
}