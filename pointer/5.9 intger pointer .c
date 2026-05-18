#include<stdio.h>


int main(){
  int num;
  int *ptr = &num;
  printf(" welcome to pointer in c \n");
  printf(" Enter the value of num:\n");
  scanf("%d",ptr);
  printf(" \nthe value of num is %d \n",num);
  printf(" the address of num is %d \n",*ptr);

   return 0;

}