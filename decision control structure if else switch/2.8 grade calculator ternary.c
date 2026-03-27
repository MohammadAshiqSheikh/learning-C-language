#include<stdio.h>
int main(){
  int number;
  printf(" well come to  grade ternary calculator\n");
  printf("Please Enter a Number:");
  scanf("%d",&number);
  printf("\n your marks is this category:");;
  number > 80  ? printf("high")
               : number >= 50 ? printf(" moderate") 
               : printf("low");






  return 0;
}