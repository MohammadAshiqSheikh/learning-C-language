#include<stdio.h>
int main(){
  int num = 5;
  int *ptr = &num;
  printf("the value of num is %d \n", num);
  *ptr = 10;
  printf("\nthe value of num is %d \n",num);
  return 0;
}