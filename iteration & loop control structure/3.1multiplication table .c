#include<stdio.h>
int main(){
 int num;
 printf("wellcome to multiplication table\n");
 printf("please enter a number:");
 scanf("%d",&num);

 int  i = 1;
 while (i <= 20)
 {
  printf("\n%d × %d = %d",num,i, num*i);
  i++;
 }
 






  return 0;
}